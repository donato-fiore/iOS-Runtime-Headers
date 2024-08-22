// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKMULTIPARTLABELMETRICS_H
#define _MKMULTIPARTLABELMETRICS_H

@class NSMutableAttributedString, NSArray, NSAttributedString;

#import <Foundation/Foundation.h>


@interface _MKMultiPartLabelMetrics : NSObject

@property (readonly, nonatomic) NSMutableAttributedString *attributedString; // ivar: _attributedString
@property (readonly, copy, nonatomic) NSArray *components; // ivar: _components
@property (nonatomic) NSUInteger currentSeparatorIndex; // ivar: _currentSeparatorIndex
@property (readonly, copy, nonatomic) NSAttributedString *originalAttributedString; // ivar: _originalAttributedString
@property (readonly, copy, nonatomic) NSArray *separators; // ivar: _separators


-(BOOL)_shiftLocationOfStrings:(id)arg0 startingAtIndex:(NSUInteger)arg1 shiftValue:(NSInteger)arg2 ;
-(BOOL)replaceSeparatorAtIndex:(NSUInteger)arg0 withString:(id)arg1 ;
-(id)initWithMultiPartString:(id)arg0 ;
-(void)reset;


@end


#endif