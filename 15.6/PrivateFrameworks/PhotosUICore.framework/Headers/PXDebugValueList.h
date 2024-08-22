// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXDEBUGVALUELIST_H
#define PXDEBUGVALUELIST_H

@class NSMutableArray;
@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface PXDebugValueList : NSObject <NSFastEnumeration>



@property (readonly, nonatomic) NSMutableArray *debugValues; // ivar: _debugValues


-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)init;
-(void)addValueWithLabel:(id)arg0 ;
-(void)addValueWithLabel:(id)arg0 boolValue:(BOOL)arg1 ;
-(void)addValueWithLabel:(id)arg0 boolValue:(BOOL)arg1 positiveValue:(BOOL)arg2 positiveHighlighted:(BOOL)arg3 negativeHighlighted:(BOOL)arg4 ;
-(void)addValueWithLabel:(id)arg0 doubleValue:(CGFloat)arg1 ;
-(void)addValueWithLabel:(id)arg0 highlightedScore:(CGFloat)arg1 ;
-(void)addValueWithLabel:(id)arg0 integerValue:(NSInteger)arg1 ;
-(void)addValueWithLabel:(id)arg0 stringValue:(id)arg1 ;
-(void)addValueWithLabel:(id)arg0 stringValue:(id)arg1 highlightStyle:(NSUInteger)arg2 ;


@end


#endif