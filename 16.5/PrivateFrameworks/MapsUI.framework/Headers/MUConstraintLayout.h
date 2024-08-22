// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUCONSTRAINTLAYOUT_H
#define MUCONSTRAINTLAYOUT_H

@class NSArray, UIView;

#import <Foundation/Foundation.h>

#import "MUConstraintLayoutInternal.h"

@interface MUConstraintLayout : NSObject

@property (readonly, nonatomic) MUConstraintLayoutInternal *internal; // ivar: _internal
@property (readonly, nonatomic) NSArray *layoutConstraints;
@property (readonly, nonatomic) NSArray *layoutGuides;
@property (nonatomic) NSInteger mode;
@property (weak, nonatomic) UIView *viewForForwardingSetNeedsUpdateConstraints;


-(id)initWithInternal:(id)arg0 ;
-(void)activate;
-(void)deactivate;
-(void)prepare;


@end


#endif