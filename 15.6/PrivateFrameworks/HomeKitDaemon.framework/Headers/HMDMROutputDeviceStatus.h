// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMROUTPUTDEVICESTATUS_H
#define HMDMROUTPUTDEVICESTATUS_H

@class NSError, NSString;

#import <Foundation/Foundation.h>

#import "HMDMRAVEndpoint.h"

@interface HMDMROutputDeviceStatus : NSObject

@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) HMDMRAVEndpoint *outputEndpoint; // ivar: _outputEndpoint
@property (readonly, nonatomic) NSString *outputUID; // ivar: _outputUID


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithOutputEndpoint:(id)arg0 ;
-(id)initWithOutputEndpoint:(id)arg0 error:(id)arg1 ;
-(id)initWithOutputUID:(id)arg0 ;
-(id)initWithOutputUID:(id)arg0 error:(id)arg1 ;


@end


#endif