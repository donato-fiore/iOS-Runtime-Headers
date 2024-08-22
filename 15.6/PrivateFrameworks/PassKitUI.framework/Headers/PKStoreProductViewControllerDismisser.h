// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSTOREPRODUCTVIEWCONTROLLERDISMISSER_H
#define PKSTOREPRODUCTVIEWCONTROLLERDISMISSER_H

@class SKStoreProductViewController, NSString;
@protocol SKStoreProductViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface PKStoreProductViewControllerDismisser : NSObject <SKStoreProductViewControllerDelegate>

 {
    SKStoreProductViewController *_productViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)attachToProductViewController:(id)arg0 ;
-(void)dealloc;
-(void)productViewControllerDidFinish:(id)arg0 ;


@end


#endif