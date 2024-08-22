// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFMENUITEM_H
#define WFMENUITEM_H

@class UIView, NSString, WFIcon;
@protocol WFMenuElement;

#import <Foundation/Foundation.h>


@interface WFMenuItem : NSObject <WFMenuElement>



@property (readonly, nonatomic) UIView *customView; // ivar: _customView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id *handler; // ivar: _handler
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WFIcon *icon; // ivar: _icon
@property (readonly, nonatomic) BOOL isDestructive; // ivar: _isDestructive
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(id)initWithCustomView:(id)arg0 ;
-(id)initWithTitle:(id)arg0 handler:(id)arg1 ;
-(id)initWithTitle:(id)arg0 icon:(id)arg1 handler:(id)arg2 ;
-(id)initWithTitle:(id)arg0 icon:(id)arg1 isDestructive:(BOOL)arg2 handler:(id)arg3 ;
-(id)initWithTitle:(id)arg0 icon:(id)arg1 state:(NSInteger)arg2 handler:(id)arg3 ;
-(id)initWithTitle:(id)arg0 state:(NSInteger)arg1 handler:(id)arg2 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 handler:(id)arg2 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 icon:(id)arg2 handler:(id)arg3 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 icon:(id)arg2 state:(NSInteger)arg3 handler:(id)arg4 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 icon:(id)arg2 state:(NSInteger)arg3 isDestructive:(BOOL)arg4 handler:(id)arg5 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 state:(NSInteger)arg2 handler:(id)arg3 ;
-(id)menuElementRepresentationShowingStatus:(BOOL)arg0 ;


@end


#endif