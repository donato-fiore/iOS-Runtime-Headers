// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKDEVICELISTDELTAMESSAGEPAYLOAD_H
#define AKDEVICELISTDELTAMESSAGEPAYLOAD_H

@class NSString, NSArray, NSDate;

#import <Foundation/Foundation.h>


@interface AKDeviceListDeltaMessagePayload : NSObject

@property (readonly, copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (readonly, copy, nonatomic) NSString *machineID; // ivar: _machineID
@property (readonly, copy, nonatomic) NSArray *machineIDs; // ivar: _machineIDs
@property (readonly, nonatomic) NSUInteger operation; // ivar: _operation
@property (readonly, copy, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (readonly, copy, nonatomic) NSDate *timestamp; // ivar: _timestamp


-(NSUInteger)_convertOperationToEnum:(id)arg0 ;
-(id)initWithResponseBody:(id)arg0 ;


@end


#endif