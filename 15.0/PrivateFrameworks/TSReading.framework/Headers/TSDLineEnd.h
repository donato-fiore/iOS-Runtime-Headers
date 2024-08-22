// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDLINEEND_H
#define TSDLINEEND_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSDLineEnd : NSObject <NSCopying>

 {
    *CGPath mWrapPath;
}


@property (readonly, nonatomic) CGPoint endPoint; // ivar: mEndPoint
@property (readonly, nonatomic) NSString *identifier; // ivar: mIdentifier
@property (readonly, nonatomic) BOOL isFilled; // ivar: mIsFilled
@property (readonly, nonatomic) BOOL isNone;
@property (readonly, nonatomic) int lineJoin; // ivar: mLineJoin
@property (readonly, nonatomic) *CGPath path; // ivar: mPath
@property (readonly, nonatomic) *CGPath wrapPath;


+(id)filledArrow;
+(id)filledCircle;
+(id)filledDiamond;
+(id)filledSquare;
+(id)invertedArrow;
+(id)line;
+(id)lineEndWithIdentifier:(id)arg0 ;
+(id)lineEndWithPath:(struct CGPath *)arg0 endPoint:(struct CGPoint )arg1 isFilled:(BOOL)arg2 identifier:(id)arg3 ;
+(id)lineEndWithPath:(struct CGPath *)arg0 wrapPath:(struct CGPath *)arg1 endPoint:(struct CGPoint )arg2 isFilled:(BOOL)arg3 identifier:(id)arg4 ;
+(id)lineEndWithType:(int)arg0 ;
+(id)none;
+(id)openArrow;
+(id)openCircle;
+(id)openSquare;
+(id)simpleArrow;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithPath:(struct CGPath *)arg0 endPoint:(struct CGPoint )arg1 isFilled:(BOOL)arg2 identifier:(id)arg3 ;
-(id)initWithPath:(struct CGPath *)arg0 wrapPath:(struct CGPath *)arg1 endPoint:(struct CGPoint )arg2 isFilled:(BOOL)arg3 identifier:(id)arg4 lineJoin:(int)arg5 ;
-(struct CGImage *)newLineEndImageOnRight:(BOOL)arg0 forContentsScale:(CGFloat)arg1 withSize:(struct CGSize )arg2 ;
-(void)dealloc;


@end


#endif