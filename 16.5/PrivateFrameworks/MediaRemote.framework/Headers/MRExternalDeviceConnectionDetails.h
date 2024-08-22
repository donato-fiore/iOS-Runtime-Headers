// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MREXTERNALDEVICECONNECTIONDETAILS_H
#define MREXTERNALDEVICECONNECTIONDETAILS_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface MRExternalDeviceConnectionDetails : NSObject

@property (copy, nonatomic) id *completion; // ivar: _completion
@property (nonatomic) unsigned int qos; // ivar: _qos
@property (retain, nonatomic) NSString *reason; // ivar: _reason
@property (retain, nonatomic) NSString *requestID; // ivar: _requestID
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate


-(id)description;


@end


#endif