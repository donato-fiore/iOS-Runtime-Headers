// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTABLEVIEW_H
#define TSTABLEVIEW_H

@class UITableView;
@protocol OS_dispatch_group;



@interface TSTableView : UITableView

@property (nonatomic) NSInteger touchDeferCounter; // ivar: _touchDeferCounter
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *touchDeferGroup; // ivar: _touchDeferGroup
@property (nonatomic) BOOL tsaxPrefersCustomReorderMessage; // ivar: _tsaxPrefersCustomReorderMessage


+(NSInteger)ts_preferredStyleForStyle:(NSInteger)arg0 ;
-(id)_accessibilityReorderMessageForNewIndexPath:(id)arg0 swappedWithRow:(NSInteger)arg1 movingDown:(BOOL)arg2 ;
-(id)contextualActionForDeletingRowAtIndexPath:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 ;
-(void)_deferWhenTouchingWithBlock:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif