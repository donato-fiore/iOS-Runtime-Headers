// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRACTIONSCLUSTERSTARTACTIONPARAMS_H
#define MTRACTIONSCLUSTERSTARTACTIONPARAMS_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRActionsClusterStartActionParams : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *actionID; // ivar: _actionID
@property (copy, nonatomic) NSNumber *invokeID; // ivar: _invokeID
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout; // ivar: _serverSideProcessingTimeout
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif