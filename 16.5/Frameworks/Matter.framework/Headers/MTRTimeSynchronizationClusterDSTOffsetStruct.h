// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRTIMESYNCHRONIZATIONCLUSTERDSTOFFSETSTRUCT_H
#define MTRTIMESYNCHRONIZATIONCLUSTERDSTOFFSETSTRUCT_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRTimeSynchronizationClusterDSTOffsetStruct : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *offset; // ivar: _offset
@property (copy, nonatomic) NSNumber *validStarting; // ivar: _validStarting
@property (copy, nonatomic) NSNumber *validUntil; // ivar: _validUntil


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif