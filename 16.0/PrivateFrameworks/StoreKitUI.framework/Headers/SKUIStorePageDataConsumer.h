// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUISTOREPAGEDATACONSUMER_H
#define SKUISTOREPAGEDATACONSUMER_H

@class SSVURLDataConsumer;



@interface SKUIStorePageDataConsumer : SSVURLDataConsumer

@property (nonatomic) Class storePageClass; // ivar: _storePageClass


-(id)_artistPageComponentsForDictionary:(id)arg0 items:(id)arg1 ;
-(id)_backgroundArtworkWithDictionary:(id)arg0 ;
-(id)_bannerRoomComponentsForDictionary:(id)arg0 items:(id)arg1 ;
-(id)_customPageComponentsForDictionary:(id)arg0 items:(id)arg1 ;
-(id)_groupingPageComponentsForDictionary:(id)arg0 items:(id)arg1 ;
-(id)_multiRoomComponentsForDictionary:(id)arg0 items:(id)arg1 ;
-(id)_newCustomPageComponentForBlockType:(id)arg0 context:(id)arg1 ;
-(id)_newFeaturedContentComponentForKind:(NSInteger)arg0 context:(id)arg1 ;
-(id)_newPageComponentContextWithDictionary:(id)arg0 ;
-(id)_roomComponentsForDictionary:(id)arg0 items:(id)arg1 gridType:(NSInteger)arg2 ;
-(id)init;
-(id)objectForData:(id)arg0 response:(id)arg1 error:(*id)arg2 ;
-(id)storePageWithDictionary:(id)arg0 ;
-(id)storePageWithDictionary:(id)arg0 response:(id)arg1 ;


@end


#endif