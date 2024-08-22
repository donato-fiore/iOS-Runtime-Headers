// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFEDITORDRAWERSCROLLVIEWDELEGATE_H
#define WFEDITORDRAWERSCROLLVIEWDELEGATE_H

@class NSString;
@protocol UIScrollViewDelegate;

#import <Foundation/Foundation.h>

#import "WFDrawerItem.h"

@interface WFEditorDrawerScrollViewDelegate : NSObject <UIScrollViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) WFDrawerItem *drawerItem; // ivar: _drawerItem
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<UIScrollViewDelegate> *originalDelegate; // ivar: _originalDelegate
@property (readonly) Class superclass;


+(id)findScrollViewInView:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)initWithDrawerItem:(id)arg0 originalDelegate:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif