// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFMESSAGE_H
#define SFMESSAGE_H

@class NSData, NSSet, NSDictionary, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SFDevice.h"
#import "SFSession.h"

@interface SFMessage : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSData *bodyData; // ivar: _bodyData
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (copy, nonatomic) NSSet *deviceIDs; // ivar: _deviceIDs
@property (nonatomic) BOOL expectsResponse; // ivar: _expectsResponse
@property (copy, nonatomic) NSDictionary *headerFields; // ivar: _headerFields
@property (copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (retain, nonatomic) SFDevice *peerDevice; // ivar: _peerDevice
@property (retain, nonatomic) SFSession *session; // ivar: _session


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;


@end


#endif