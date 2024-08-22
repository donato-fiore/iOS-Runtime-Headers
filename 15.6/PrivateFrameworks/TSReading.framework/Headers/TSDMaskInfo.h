// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDMASKINFO_H
#define TSDMASKINFO_H

@protocol TSDMixing;


#import "TSDDrawableInfo.h"
#import "TSDPathSource.h"

@interface TSDMaskInfo : TSDDrawableInfo <TSDMixing>



@property (retain, nonatomic) TSDPathSource *pathSource; // ivar: mPathSource


-(BOOL)isEqual:(id)arg0 ;
-(Class)layoutClass;
-(Class)repClass;
-(NSInteger)mixingTypeWithObject:(id)arg0 ;
-(id)copyWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 pathSource:(id)arg2 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(void)dealloc;
-(void)setGeometry:(id)arg0 ;


@end


#endif