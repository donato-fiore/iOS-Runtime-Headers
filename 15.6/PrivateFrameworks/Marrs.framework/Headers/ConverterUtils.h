// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CONVERTERUTILS_H
#define CONVERTERUTILS_H


#import <Foundation/Foundation.h>


@interface ConverterUtils : NSObject



+(id)convertMentionDetectorResponseFromCppToObjC:(*void)arg0 ;
+(id)convertMentionResolverResponseFromCppToObjC:(*void)arg0 ;
+(struct Reader )getCppReaderFromObjCObject:(id)arg0 ;
+(struct unique_ptr<sirinluinternalmention_detector::MentionDetectorRequest, std::default_delete<sirinluinternalmention_detector::MentionDetectorRequest>> )convertMentionDetectorRequestFromObjCToCpp:(id)arg0 ;
+(struct unique_ptr<sirinluinternalmention_resolver::MentionResolverRequest, std::default_delete<sirinluinternalmention_resolver::MentionResolverRequest>> )convertMentionResolverRequestFromObjCToCpp:(id)arg0 ;


@end


#endif