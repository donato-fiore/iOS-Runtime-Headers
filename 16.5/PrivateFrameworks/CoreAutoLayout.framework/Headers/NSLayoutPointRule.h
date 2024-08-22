// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSLAYOUTPOINTRULE_H
#define NSLAYOUTPOINTRULE_H

@class NSString;
@protocol NSLayoutRule;

#import <Foundation/Foundation.h>

#import "NSLayoutPoint.h"

@interface NSLayoutPointRule : NSObject <NSLayoutRule>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSLayoutPoint *firstLayoutPoint; // ivar: _firstLayoutPoint
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *ruleDescription;
@property (readonly, copy) NSLayoutPoint *secondLayoutPoint; // ivar: _secondLayoutPoint
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)makeChildRules;
-(void)dealloc;


@end


#endif