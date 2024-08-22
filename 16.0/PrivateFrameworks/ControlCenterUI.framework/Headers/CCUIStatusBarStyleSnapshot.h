// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CCUISTATUSBARSTYLESNAPSHOT_H
#define CCUISTATUSBARSTYLESNAPSHOT_H

@class NSDictionary, NSString, UIStatusBarStyleRequest, _UIStatusBarData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CCUIStatusBarStyleSnapshot : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSDictionary *actionsByPartIdentifier; // ivar: _actionsByPartIdentifier
@property (readonly, nonatomic) CGRect avoidanceFrame; // ivar: _avoidanceFrame
@property (readonly, nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (readonly, copy, nonatomic) NSString *hiddenPartIdentifier; // ivar: _hiddenPartIdentifier
@property (readonly, copy, nonatomic) UIStatusBarStyleRequest *leadingStyleRequest; // ivar: _leadingStyleRequest
@property (readonly, copy, nonatomic) _UIStatusBarData *overlayData; // ivar: _overlayData
@property (readonly, nonatomic) UIEdgeInsets statusBarInsets; // ivar: _statusBarInsets
@property (readonly, copy, nonatomic) UIStatusBarStyleRequest *trailingStyleRequest; // ivar: _trailingStyleRequest


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithHidden:(BOOL)arg0 hiddenPartIdentifier:(id)arg1 leadingStyleRequest:(id)arg2 trailingStyleRequest:(id)arg3 overlayData:(id)arg4 actionsByPartIdentifier:(id)arg5 statusBarInsets:(struct UIEdgeInsets )arg6 avoidanceFrame:(struct CGRect )arg7 ;


@end


#endif