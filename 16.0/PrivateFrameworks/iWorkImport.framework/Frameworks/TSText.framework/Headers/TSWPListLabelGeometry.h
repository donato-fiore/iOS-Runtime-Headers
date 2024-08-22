// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPLISTLABELGEOMETRY_H
#define TSWPLISTLABELGEOMETRY_H


#import <Foundation/Foundation.h>


@interface TSWPListLabelGeometry : NSObject

@property (nonatomic) CGFloat baselineOffset; // ivar: mBaselineOffset
@property (nonatomic) CGFloat scale; // ivar: mScale
@property (nonatomic) BOOL scaleWithText; // ivar: mScaleWithText


+(id)listLabelGeometry;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithScale:(CGFloat)arg0 scaleWithText:(BOOL)arg1 baselineOffset:(CGFloat)arg2 ;


@end


#endif