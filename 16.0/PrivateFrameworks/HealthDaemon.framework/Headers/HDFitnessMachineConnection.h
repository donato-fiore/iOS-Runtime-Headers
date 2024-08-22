// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDFITNESSMACHINECONNECTION_H
#define HDFITNESSMACHINECONNECTION_H

@class NSUUID;
@protocol HKFitnessMachineConnectionClientInterface;

#import <Foundation/Foundation.h>


@interface HDFitnessMachineConnection : NSObject

@property (readonly, nonatomic) NSObject<HKFitnessMachineConnectionClientInterface> *client; // ivar: _client
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


-(id)initWithUUID:(id)arg0 client:(id)arg1 ;


@end


#endif