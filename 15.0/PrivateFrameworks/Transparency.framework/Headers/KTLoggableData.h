// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KTLOGGABLEDATA_H
#define KTLOGGABLEDATA_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface KTLoggableData : NSObject <NSSecureCoding>



@property (retain) NSData *clientData; // ivar: _clientData
@property (retain) NSData *clientDataVRFOutput; // ivar: _clientDataVRFOutput
@property (copy) NSData *deviceID; // ivar: _deviceID
@property (retain) NSData *deviceVRFOutput; // ivar: _deviceVRFOutput
@property BOOL marked; // ivar: _marked
@property BOOL notInSyncedData; // ivar: _notInSyncedData
@property BOOL successfulSync; // ivar: _successfulSync


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithClientData:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif