// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVRAWSPEECHPROFILECONVERTERCONTACT_H
#define CKVRAWSPEECHPROFILECONVERTERCONTACT_H

@class KVItemBuilder, NSString;
@protocol CKVRawSpeechProfileConverter;

#import <Foundation/Foundation.h>


@interface CKVRawSpeechProfileConverterContact : NSObject <CKVRawSpeechProfileConverter>

 {
    KVItemBuilder *_builder;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_companyContactFromSpeechWords:(id)arg0 metadata:(id)arg1 error:(*id)arg2 ;
-(id)_standardContactFromSpeechWords:(id)arg0 metadata:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)speechCategoryId;
-(id)vocabularyItemFromSpeechWords:(id)arg0 metadata:(id)arg1 speechNamespace:(id)arg2 error:(*id)arg3 ;


@end


#endif