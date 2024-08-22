// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KMLANGUAGEMODELBRIDGE_H
#define KMLANGUAGEMODELBRIDGE_H

@class NSString, KVItemBuilder;
@protocol KMProviderDatasetBridge;

#import <Foundation/Foundation.h>


@interface KMLanguageModelBridge : NSObject <KMProviderDatasetBridge>

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
-(id)initWithLanguageCode:(id)arg0 ;
-(id)originAppId;


@end


#endif