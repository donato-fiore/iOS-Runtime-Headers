// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOGRAPHICCOORDINATE_H
#define GEOGRAPHICCOORDINATE_H


#import <Foundation/Foundation.h>


@interface GeographicCoordinate : NSObject

@property (nonatomic) CGFloat altitude; // ivar: _altitude
@property (nonatomic) CGFloat latitude; // ivar: _latitude
@property (nonatomic) CGFloat longitude; // ivar: _longitude


+(id)fromECEFCoordinate:(id)arg0 ;
-(id)init;
-(id)initFromECEFCoordinate:(id)arg0 ;
-(id)initWithLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 andAltitude:(CGFloat)arg2 ;
-(void)setFromECEFCoordinate:(id)arg0 ;
-(void)setFromLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 andAltitude:(CGFloat)arg2 ;


@end


#endif