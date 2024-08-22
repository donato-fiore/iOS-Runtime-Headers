// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIDISMISSINGPRODUCTVIEWCONTROLLER_H
#define SKUIDISMISSINGPRODUCTVIEWCONTROLLER_H

@class SKStoreProductViewController, NSString;
@protocol SKStoreProductViewControllerDelegate;



@interface SKUIDismissingProductViewController : SKStoreProductViewController <SKStoreProductViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)productViewControllerDidFinish:(id)arg0 ;


@end


#endif