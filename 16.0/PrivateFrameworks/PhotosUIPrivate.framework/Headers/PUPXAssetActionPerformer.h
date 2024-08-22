// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPXASSETACTIONPERFORMER_H
#define PUPXASSETACTIONPERFORMER_H

@class PXAssetActionPerformer, NSString, UIViewController;
@protocol PXActionPerformerDelegate;


#import "PUAssetActionPerformer.h"

@interface PUPXAssetActionPerformer : PUAssetActionPerformer <PXActionPerformerDelegate>

 {
    PXAssetActionPerformer *_underlyingActionPerformer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) NSObject<PXActionPerformerDelegate> *forwardingDelegate; // ivar: _forwardingDelegate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIViewController *presentedViewController; // ivar: presentedViewController
@property (readonly) Class superclass;


-(BOOL)actionPerformer:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)actionPerformer:(id)arg0 presentViewController:(id)arg1 ;
-(NSUInteger)state;
-(id)initWithActionType:(NSUInteger)arg0 assets:(id)arg1 orAssetsByAssetCollection:(id)arg2 ;
-(id)initWithUnderlyingActionPerformer:(id)arg0 ;
-(id)undoManagerForActionPerformer:(id)arg0 ;
-(void)actionPerformer:(id)arg0 didChangeState:(NSUInteger)arg1 ;
-(void)performWithCompletionHandler:(id)arg0 ;


@end


#endif