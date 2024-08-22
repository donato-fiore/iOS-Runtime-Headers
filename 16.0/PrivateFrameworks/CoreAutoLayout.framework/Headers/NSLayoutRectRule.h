// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSLAYOUTRECTRULE_H
#define NSLAYOUTRECTRULE_H

@class NSString;
@protocol NSLayoutRule;

#import <Foundation/Foundation.h>

#import "NSLayoutRect.h"

@interface NSLayoutRectRule : NSObject <NSLayoutRule>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSLayoutRect *firstLayoutRect; // ivar: _firstLayoutRect
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *identifier;
@property NSInteger relation; // ivar: _relation
@property (readonly, copy) NSString *ruleDescription;
@property (readonly, copy) NSLayoutRect *secondLayoutRect; // ivar: _secondLayoutRect
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)makeChildRules;
-(void)dealloc;


@end


#endif