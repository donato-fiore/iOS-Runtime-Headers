// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIHANDWRITINGSTROKES_H
#define TIHANDWRITINGSTROKES_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TIHandwritingStrokes : NSObject <NSCopying, NSSecureCoding>

 {
    vector<std::vector<TIHandwritingPoint>, std::allocator<std::vector<TIHandwritingPoint>>> _strokes;
    BOOL _continuePreviousStroke;
}




+(BOOL)supportsSecureCoding;
-(NSUInteger)numberOfPointsInStrokeAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)numberOfStrokes;
-(NSUInteger)totalNumberOfPoints;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(struct CGPoint )pointAtIndex:(NSUInteger)arg0 inStrokeAtIndex:(NSUInteger)arg1 ;
-(void)addPoint:(struct CGPoint )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)endStroke;
-(void)removeAllStrokes;
-(void)removeStrokeAtIndex:(NSUInteger)arg0 ;


@end


#endif