// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKSTATEFULVIEWCOMPONENTCONTROLLER_H
#define CKSTATEFULVIEWCOMPONENTCONTROLLER_H

@class UIView;


#import "CKComponentController.h"

@interface CKStatefulViewComponentController : CKComponentController {
    UIView *_statefulView;
    BOOL _mounted;
    id *_statefulViewContext;
}




+(NSInteger)maximumPoolSize:(id)arg0 ;
+(id)contextForNewStatefulView:(id)arg0 ;
+(id)newStatefulView:(id)arg0 ;
+(void)configureStatefulView:(id)arg0 forComponent:(id)arg1 ;
-(BOOL)canRelinquishStatefulView;
-(id)statefulView;
-(void)_presentStatefulView;
-(void)_relinquishStatefulViewIfPossible;
-(void)canRelinquishStatefulViewDidChange;
-(void)didAcquireStatefulView:(id)arg0 ;
-(void)didMount;
-(void)didRemount;
-(void)didUnmount;
-(void)didUpdateComponent;
-(void)willRelinquishStatefulView:(id)arg0 ;


@end


#endif