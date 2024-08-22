// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KTDEVICE_H
#define KTDEVICE_H

@class NSMutableArray, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface KTDevice : NSObject <NSSecureCoding>



@property (retain) NSMutableArray *clientDatas; // ivar: _clientDatas
@property (retain) NSData *deviceID; // ivar: _deviceID
@property (retain) NSData *deviceIDHash; // ivar: _deviceIDHash
@property (readonly) NSData *deviceIDVRFOutput;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)clientRecordForAppVersion:(NSUInteger)arg0 clientDataHash:(id)arg1 ;
-(id)clientRecordsForHash:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMutation:(id)arg0 ;
-(void)addClientDatasObject:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)markClientDatasForAppVersion:(NSUInteger)arg0 mutationMs:(NSUInteger)arg1 ;
-(void)removeClientDatasObject:(id)arg0 ;
-(void)updateWithMutation:(id)arg0 error:(*id)arg1 ;


@end


#endif