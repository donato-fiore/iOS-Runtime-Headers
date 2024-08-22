// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKROUTEETA_H
#define _MKROUTEETA_H


#import <Foundation/Foundation.h>


@interface _MKRouteETA : NSObject

@property (nonatomic) CGFloat distance; // ivar: _distance
@property (readonly, nonatomic) CGFloat responseTime; // ivar: _responseTime
@property (nonatomic) int status; // ivar: _status
@property (nonatomic) NSUInteger transportType; // ivar: _transportType
@property (nonatomic) CGFloat travelTime; // ivar: _travelTime


+(id)routeETAWithDistance:(CGFloat)arg0 travelTime:(CGFloat)arg1 transportType:(NSUInteger)arg2 ;
+(id)routeETAWithDistance:(CGFloat)arg0 travelTime:(CGFloat)arg1 transportType:(NSUInteger)arg2 status:(int)arg3 ;


@end


#endif