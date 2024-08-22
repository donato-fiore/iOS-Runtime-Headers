// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPDIRECTFLOW_H
#define NPDIRECTFLOW_H

@class NSDate, NSNumber;

#import <Foundation/Foundation.h>

#import "NSPConnectionInfo.h"

@interface NPDirectFlow : NSObject {
    ? _protocol;
}


@property (retain) NSPConnectionInfo *connectionInfo; // ivar: _connectionInfo
@property (retain) NSDate *connectionStartDate; // ivar: _connectionStartDate
@property (retain) NSDate *firstTxByteTimestamp; // ivar: _firstTxByteTimestamp
@property (readonly) NSNumber *identifier; // ivar: _identifier
@property (readonly) *nw_protocol protocol;
@property (readonly) NSDate *startDate; // ivar: _startDate


+(void)initializeProtocol;
-(id)initWithParameters:(id)arg0 ;
-(void)createConnectionInfo;
-(void)handleDetachedFromProtocol;


@end


#endif