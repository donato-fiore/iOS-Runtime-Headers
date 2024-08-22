// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIALERTCONTROLLERACTIONVIEWINTERFACEACTION_H
#define _UIALERTCONTROLLERACTIONVIEWINTERFACEACTION_H

@class NSString;
@protocol UIAlertActionMutablePropertyObservering;


#import "UIInterfaceAction.h"
#import "_UIAlertControllerActionView.h"
#import "UIAlertAction.h"

@interface _UIAlertControllerActionViewInterfaceAction : UIInterfaceAction <UIAlertActionMutablePropertyObservering>



@property (readonly, nonatomic) _UIAlertControllerActionView *alertControllerActionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIAlertAction *underlyingAlertAction; // ivar: _underlyingAlertAction
@property (readonly, nonatomic) BOOL valid; // ivar: _valid


+(id)actionWithAlertControllerActionView:(id)arg0 ;
-(NSInteger)_typeForDeterminingViewRepresentation;
-(NSInteger)type;
-(id)classificationTitle;
-(id)leadingImage;
-(void)_action:(id)arg0 changedToBePreferred:(BOOL)arg1 ;
-(void)_action:(id)arg0 changedToChecked:(BOOL)arg1 ;
-(void)_action:(id)arg0 changedToEnabled:(BOOL)arg1 ;
-(void)_action:(id)arg0 changedToTitle:(id)arg1 ;
-(void)_action:(id)arg0 changedToTitleTextAlignment:(NSInteger)arg1 ;
-(void)_action:(id)arg0 updatedImageTintColor:(id)arg1 ;
-(void)_action:(id)arg0 updatedTitleTextColor:(id)arg1 ;
-(void)_initializeStateFromUnderlyingAlertAction;
-(void)dealloc;


@end


#endif