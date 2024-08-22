// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKOUTSIDETAPCALLBACK_H
#define _HKOUTSIDETAPCALLBACK_H

@class UIView;

#import <Foundation/Foundation.h>


@interface _HKOutsideTapCallback : NSObject

@property (readonly, nonatomic) id *outsideTapBlock; // ivar: _outsideTapBlock
@property (readonly, weak, nonatomic) UIView *view; // ivar: _view


-(id)initWithView:(id)arg0 outsideTapBlock:(id)arg1 ;


@end


#endif