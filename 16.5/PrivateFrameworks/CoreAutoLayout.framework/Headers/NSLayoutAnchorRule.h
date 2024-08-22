// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSLAYOUTANCHORRULE_H
#define NSLAYOUTANCHORRULE_H

@class NSString;
@protocol NSLayoutRule;

#import <Foundation/Foundation.h>

#import "NSLayoutAnchor.h"

@interface NSLayoutAnchorRule : NSObject <NSLayoutRule>



@property (readonly) CGFloat constant; // ivar: _constant
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSLayoutAnchor *firstAnchor; // ivar: _firstAnchor
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *identifier; // ivar: _identifier
@property (readonly) CGFloat multiplier; // ivar: _multiplier
@property (readonly) float priority; // ivar: _priority
@property (readonly) NSInteger relation; // ivar: _relation
@property (readonly, copy) NSString *ruleDescription;
@property (readonly, copy) NSLayoutAnchor *secondAnchor; // ivar: _secondAnchor
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)makeChildRules;
-(id)makeLayoutConstraint;
-(void)dealloc;


@end


#endif