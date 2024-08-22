// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVRAWSPEECHPROFILECONVERTERCUSTOMTERM_H
#define CKVRAWSPEECHPROFILECONVERTERCUSTOMTERM_H

@class NSString;
@protocol CKVRawSpeechProfileConverter;

#import <Foundation/Foundation.h>


@interface CKVRawSpeechProfileConverterCustomTerm : NSObject <CKVRawSpeechProfileConverter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)speechCategoryId;
+(id)vocabularyItemFromSpeechWords:(id)arg0 metadata:(id)arg1 speechNamespace:(id)arg2 error:(*id)arg3 ;
+(unsigned short)_reverseLookupCustomTypeFromOntologyLabel:(id)arg0 ;


@end


#endif