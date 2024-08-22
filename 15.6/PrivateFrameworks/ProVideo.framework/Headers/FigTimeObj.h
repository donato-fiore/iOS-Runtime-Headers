// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGTIMEOBJ_H
#define FIGTIMEOBJ_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FigTimeObj : NSObject <NSCopying, NSSecureCoding>

 {
    ? _time;
}




+(BOOL)classIsAbstract;
+(BOOL)supportsSecureCoding;
+(id)timeWithTime:(struct ? )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSInteger)compareWithTime:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCMTime:(struct ? )arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFigTime:(struct ? )arg0 ;
-(struct ? )time;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getValue:(struct ? *)arg0 ;
-(void)setTime:(struct ? )arg0 ;


@end


#endif