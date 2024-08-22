// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSSTACKLAYOUTRULE_H
#define NSSTACKLAYOUTRULE_H

@class NSString, NSArray;
@protocol NSLayoutRule;

#import <Foundation/Foundation.h>


@interface NSStackLayoutRule : NSObject <NSLayoutRule>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *identifier;
@property (readonly) NSInteger orientation; // ivar: _orientation
@property (readonly, copy) NSString *ruleDescription;
@property (readonly) CGFloat spacing; // ivar: _spacing
@property (readonly, copy) NSArray *stackedRects; // ivar: _stackedRects
@property (readonly) Class superclass;


+(id)horizontalStackWithRects:(id)arg0 spacing:(CGFloat)arg1 ;
+(id)stackWithOrientation:(NSInteger)arg0 stackedRects:(id)arg1 spacing:(CGFloat)arg2 ;
+(id)verticalStackWithRects:(id)arg0 spacing:(CGFloat)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)makeChildRules;
-(void)dealloc;


@end


#endif