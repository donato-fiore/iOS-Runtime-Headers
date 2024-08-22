// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVRAWSPEECHPROFILECONVERTERAPPINFO_H
#define CKVRAWSPEECHPROFILECONVERTERAPPINFO_H

@class NSString;
@protocol CKVRawSpeechProfileConverter;

#import <Foundation/Foundation.h>


@interface CKVRawSpeechProfileConverterAppInfo : NSObject <CKVRawSpeechProfileConverter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_placeholderBundleIdWithAppName:(id)arg0 ;
+(id)speechCategoryId;
+(id)vocabularyItemFromSpeechWords:(id)arg0 metadata:(id)arg1 speechNamespace:(id)arg2 error:(*id)arg3 ;


@end


#endif