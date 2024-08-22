// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOREFERENCETIMEDATA_H
#define GEOREFERENCETIMEDATA_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GEOReferenceTimeData : NSObject <NSSecureCoding>



@property (readonly, nonatomic) timeval kernBootTime; // ivar: _kernBoottime
@property (readonly, nonatomic) CGFloat kernTime; // ivar: _kernTime
@property (readonly, nonatomic) CGFloat refError; // ivar: _refError
@property (readonly, nonatomic) CGFloat refTime; // ivar: _refTime


+(BOOL)supportsSecureCoding;
-(CGFloat)currentReferenceTime;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRefTime:(CGFloat)arg0 refError:(CGFloat)arg1 kernTime:(CGFloat)arg2 bootTime:(struct timeval )arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif