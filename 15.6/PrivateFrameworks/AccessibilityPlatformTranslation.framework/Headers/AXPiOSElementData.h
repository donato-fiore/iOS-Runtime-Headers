// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXPIOSELEMENTDATA_H
#define AXPIOSELEMENTDATA_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface AXPiOSElementData : NSObject <NSCopying>



@property (nonatomic) int pid; // ivar: _pid
@property (nonatomic) ? uid; // ivar: _uid


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif