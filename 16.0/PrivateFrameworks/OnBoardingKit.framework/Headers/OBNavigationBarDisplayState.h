// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OBNAVIGATIONBARDISPLAYSTATE_H
#define OBNAVIGATIONBARDISPLAYSTATE_H


#import <Foundation/Foundation.h>


@interface OBNavigationBarDisplayState : NSObject

@property (nonatomic) CGFloat backgroundOpacity; // ivar: _backgroundOpacity
@property (nonatomic) CGFloat titleOpacity; // ivar: _titleOpacity


+(id)displayStateForNavigationBar:(id)arg0 ;
-(id)initWithNavigationBar:(id)arg0 ;
-(void)applyState:(id)arg0 ;


@end


#endif