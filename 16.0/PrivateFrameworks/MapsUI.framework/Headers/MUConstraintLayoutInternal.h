// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUCONSTRAINTLAYOUTINTERNAL_H
#define MUCONSTRAINTLAYOUTINTERNAL_H

@class NSArray, UIView;

#import <Foundation/Foundation.h>


@interface MUConstraintLayoutInternal : NSObject {
    ? layoutBuilder;
}


@property (nonatomic, readonly) NSArray *layoutConstraints;
@property (nonatomic, readonly) NSArray *layoutGuides;
@property (nonatomic) NSInteger mode;
@property (nonatomic, weak) UIView *viewForForwardingSetNeedsUpdateConstraints;


-(id)init;
-(void)activate;
-(void)deactivate;
-(void)prepare;


@end


#endif