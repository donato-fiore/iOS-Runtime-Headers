// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPTEXTROWSTYLE_H
#define LPTEXTROWSTYLE_H


#import <Foundation/Foundation.h>

#import "LPTextViewStyle.h"

@interface LPTextRowStyle : NSObject

@property (nonatomic) NSInteger balancingMode; // ivar: _balancingMode
@property (readonly, nonatomic) LPTextViewStyle *leading; // ivar: _leading
@property (readonly, nonatomic) LPTextViewStyle *trailing; // ivar: _trailing


-(id)initWithPlatform:(NSInteger)arg0 fontScalingFactor:(CGFloat)arg1 ;
-(id)left;
-(id)right;
-(void)applyToAllTextViewStyles:(id)arg0 ;


@end


#endif