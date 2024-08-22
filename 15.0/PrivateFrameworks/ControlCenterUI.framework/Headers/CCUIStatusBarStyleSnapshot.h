// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CCUISTATUSBARSTYLESNAPSHOT_H
#define CCUISTATUSBARSTYLESNAPSHOT_H

@class NSString, UIStatusBarStyleRequest;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CCUIStatusBarStyleSnapshot : NSObject <NSCopying>



@property (readonly, nonatomic) CGRect avoidanceFrame; // ivar: _avoidanceFrame
@property (readonly, nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (readonly, copy, nonatomic) NSString *hiddenPartIdentifier; // ivar: _hiddenPartIdentifier
@property (readonly, copy, nonatomic) UIStatusBarStyleRequest *leadingStyleRequest; // ivar: _leadingStyleRequest
@property (readonly, nonatomic) UIEdgeInsets statusBarInsets; // ivar: _statusBarInsets
@property (readonly, copy, nonatomic) UIStatusBarStyleRequest *trailingStyleRequest; // ivar: _trailingStyleRequest


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithHidden:(BOOL)arg0 hiddenPartIdentifier:(id)arg1 leadingStyleRequest:(id)arg2 trailingStyleRequest:(id)arg3 statusBarInsets:(struct UIEdgeInsets )arg4 avoidanceFrame:(struct CGRect )arg5 ;


@end


#endif