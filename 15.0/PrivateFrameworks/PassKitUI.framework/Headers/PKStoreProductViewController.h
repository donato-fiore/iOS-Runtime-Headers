// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSTOREPRODUCTVIEWCONTROLLER_H
#define PKSTOREPRODUCTVIEWCONTROLLER_H

@class SKStoreProductViewController, NSString;
@protocol SKStoreProductViewControllerDelegate;



@interface PKStoreProductViewController : SKStoreProductViewController <SKStoreProductViewControllerDelegate>

 {
    BOOL _suppressingFooter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithItemIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)productViewControllerDidFinish:(id)arg0 ;
-(void)setSupressingFooter:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif