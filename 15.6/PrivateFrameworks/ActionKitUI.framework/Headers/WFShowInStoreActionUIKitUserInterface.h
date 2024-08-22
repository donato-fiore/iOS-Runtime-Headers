// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSHOWINSTOREACTIONUIKITUSERINTERFACE_H
#define WFSHOWINSTOREACTIONUIKITUSERINTERFACE_H

@class WFEmbeddableActionUserInterface, NSString;
@protocol SKStoreProductViewControllerDelegate, WFShowInStoreActionUserInterface;



@interface WFShowInStoreActionUIKitUserInterface : WFEmbeddableActionUserInterface <SKStoreProductViewControllerDelegate, WFShowInStoreActionUserInterface>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userInterfaceType;


-(void)cancelPresentationWithCompletionHandler:(id)arg0 ;
-(void)productViewControllerDidFinish:(id)arg0 ;
-(void)showWithiTunesObject:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif