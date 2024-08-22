// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TIKEYBOARDINTERMEDIATETEXT_H
#define TIKEYBOARDINTERMEDIATETEXT_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TIKeyboardIntermediateText : NSObject <NSSecureCoding>

 {
    NSUInteger _selectionOffset;
}


@property (readonly, nonatomic) NSInteger candidateOffset; // ivar: _candidateOffset
@property (readonly, nonatomic) NSString *displayString; // ivar: _displayString
@property (readonly, nonatomic) NSInteger highlightSegmentIndex; // ivar: _highlightSegmentIndex
@property (readonly, nonatomic) NSString *inputString; // ivar: _inputString
@property (readonly, nonatomic) NSArray *liveConversionSegments; // ivar: _liveConversionSegments
@property (readonly, nonatomic) NSString *searchString; // ivar: _searchString
@property (readonly, nonatomic) _NSRange selectedRange;


+(BOOL)supportsSecureCoding;
+(id)intermediateTextWithInputString:(id)arg0 displayString:(id)arg1 ;
+(id)intermediateTextWithInputString:(id)arg0 displayString:(id)arg1 selectionLocation:(NSUInteger)arg2 ;
+(id)intermediateTextWithInputString:(id)arg0 displayString:(id)arg1 selectionLocation:(NSUInteger)arg2 searchString:(id)arg3 ;
+(id)intermediateTextWithInputString:(id)arg0 displayString:(id)arg1 selectionLocation:(NSUInteger)arg2 searchString:(id)arg3 candidateOffset:(NSInteger)arg4 liveConversionSegments:(id)arg5 highlightSegmentIndex:(NSInteger)arg6 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInputString:(id)arg0 displayString:(id)arg1 selectionLocation:(NSUInteger)arg2 searchString:(id)arg3 candidateOffset:(NSUInteger)arg4 liveConversionSegments:(id)arg5 highlightSegmentIndex:(NSInteger)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif