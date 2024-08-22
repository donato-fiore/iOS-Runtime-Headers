// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDFITNESSMACHINESIMULATORSUPPORT_H
#define HDFITNESSMACHINESIMULATORSUPPORT_H

@class NSString, NSData, NSUUID;

#import <Foundation/Foundation.h>


@interface HDFitnessMachineSimulatorSupport : NSObject

@property (readonly, nonatomic) NSString *btIdentifier;
@property (readonly, nonatomic) NSData *btIdentifierData;
@property (readonly, nonatomic) NSUInteger fitnessMachineType; // ivar: _fitnessMachineType
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


-(id)initWithFitnessMachineType:(NSUInteger)arg0 ;
-(void)updateAdvertisementDataForSimulation:(id)arg0 ;


@end


#endif