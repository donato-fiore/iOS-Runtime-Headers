// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVLANGUAGEMODELBRIDGE_H
#define CKVLANGUAGEMODELBRIDGE_H

@class NSString, KVItemBuilder;
@protocol CKVProviderDatasetBridge;

#import <Foundation/Foundation.h>


@interface CKVLanguageModelBridge : NSObject <CKVProviderDatasetBridge>

 {
    NSString *_languageCode;
    KVItemBuilder *_builder;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)enumerateItemsWithError:(*id)arg0 usingBlock:(id)arg1 ;
-(NSInteger)itemType;
-(id)_getItemWithTokenID:(unsigned int)arg0 dynamicToken:(id)arg1 error:(*id)arg2 ;
-(id)initWithLanguageCode:(id)arg0 itemBuilder:(id)arg1 ;
-(id)originAppId;


@end


#endif