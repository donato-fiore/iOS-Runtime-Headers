// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKDEVICELISTDELTAMESSAGEPAYLOAD_H
#define AKDEVICELISTDELTAMESSAGEPAYLOAD_H

@class NSString, NSArray, NSDate;

#import <Foundation/Foundation.h>


@interface AKDeviceListDeltaMessagePayload : NSObject

@property (readonly, copy) NSString *altDSID; // ivar: _altDSID
@property (readonly, copy) NSString *machineID; // ivar: _machineID
@property (readonly, copy) NSArray *machineIDs; // ivar: _machineIDs
@property (readonly) NSUInteger operation; // ivar: _operation
@property (readonly, copy) NSString *serialNumber; // ivar: _serialNumber
@property (readonly, copy) NSDate *timestamp; // ivar: _timestamp


-(NSUInteger)_convertOperationToEnum:(id)arg0 ;
-(id)initWithResponseBody:(id)arg0 ;


@end


#endif