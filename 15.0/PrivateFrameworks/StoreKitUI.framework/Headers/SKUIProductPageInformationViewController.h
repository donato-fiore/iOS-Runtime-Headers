// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIPRODUCTPAGEINFORMATIONVIEWCONTROLLER_H
#define SKUIPRODUCTPAGEINFORMATIONVIEWCONTROLLER_H

@class UIViewController, NSString, NSOperationQueue;
@protocol SKUIContentRatingArtworkLoaderObserver;


#import "SKUIContentRatingArtworkResourceLoader.h"
#import "SKUIProductInformationView.h"
#import "SKUIProductPageProductInfo.h"
#import "SKUIClientContext.h"
#import "SKUIProductPageItem.h"

@interface SKUIProductPageInformationViewController : UIViewController <SKUIContentRatingArtworkLoaderObserver>

 {
    SKUIContentRatingArtworkResourceLoader *_contentRatingArtworkLoader;
    SKUIProductInformationView *_informationView;
    SKUIProductPageProductInfo *_productInfo;
}


@property (readonly, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SKUIProductPageItem *item; // ivar: _item
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly) Class superclass;


-(id)_contentRatingResourceLoader;
-(id)_informationLinesWithItem:(id)arg0 ratingImage:(id)arg1 ;
-(id)_informationLinesWithProductInfo:(id)arg0 ;
-(id)initWithItem:(id)arg0 clientContext:(id)arg1 ;
-(id)initWithProductInformation:(id)arg0 clientContext:(id)arg1 ;
-(void)_updateLinesWithRatingImage:(id)arg0 ;
-(void)contentRatingArtworkLoader:(id)arg0 didLoadImage:(id)arg1 forContentRating:(id)arg2 ;
-(void)dealloc;
-(void)loadView;


@end


#endif