// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RTISTYLEDINTERMEDIATETEXT_H
#define RTISTYLEDINTERMEDIATETEXT_H

@class NSAttributedString, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RTIStyledIntermediateText : NSObject <NSSecureCoding>

 {
    NSUInteger _selectionOffset;
}


@property (nonatomic) NSInteger cursorVisibility; // ivar: _cursorVisibility
@property (readonly, nonatomic) NSAttributedString *displayString; // ivar: _displayString
@property (readonly, nonatomic) NSString *inputString; // ivar: _inputString
@property (readonly, nonatomic) NSString *searchString; // ivar: _searchString
@property (readonly, nonatomic) _NSRange selectedRange;


+(BOOL)supportsSecureCoding;
+(id)intermediateTextWithInputString:(id)arg0 displayString:(id)arg1 ;
+(id)intermediateTextWithInputString:(id)arg0 displayString:(id)arg1 selectionLocation:(NSUInteger)arg2 ;
+(id)intermediateTextWithInputString:(id)arg0 displayString:(id)arg1 selectionLocation:(NSUInteger)arg2 searchString:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInputString:(id)arg0 displayString:(id)arg1 selectionLocation:(NSUInteger)arg2 searchString:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif