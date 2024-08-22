// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVRAWSPEECHPROFILECONVERTERHOMEENTITY_H
#define CKVRAWSPEECHPROFILECONVERTERHOMEENTITY_H

@class KVItemBuilder, NSString;
@protocol CKVRawSpeechProfileConverter;

#import <Foundation/Foundation.h>


@interface CKVRawSpeechProfileConverterHomeEntity : NSObject <CKVRawSpeechProfileConverter>

 {
    KVItemBuilder *_builder;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)speechCategoryId;
-(id)vocabularyItemFromSpeechWords:(id)arg0 metadata:(id)arg1 speechNamespace:(id)arg2 error:(*id)arg3 ;


@end


#endif