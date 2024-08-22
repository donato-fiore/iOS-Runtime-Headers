// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRSCENESCLUSTERCOPYSCENEPARAMS_H
#define MTRSCENESCLUSTERCOPYSCENEPARAMS_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRScenesClusterCopySceneParams : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *groupIdFrom;
@property (copy, nonatomic) NSNumber *groupIdTo;
@property (copy, nonatomic) NSNumber *groupIdentifierFrom; // ivar: _groupIdentifierFrom
@property (copy, nonatomic) NSNumber *groupIdentifierTo; // ivar: _groupIdentifierTo
@property (copy, nonatomic) NSNumber *mode; // ivar: _mode
@property (copy, nonatomic) NSNumber *sceneIdFrom;
@property (copy, nonatomic) NSNumber *sceneIdTo;
@property (copy, nonatomic) NSNumber *sceneIdentifierFrom; // ivar: _sceneIdentifierFrom
@property (copy, nonatomic) NSNumber *sceneIdentifierTo; // ivar: _sceneIdentifierTo
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout; // ivar: _serverSideProcessingTimeout
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif