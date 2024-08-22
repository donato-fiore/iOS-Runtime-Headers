// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLTREMOTEREQUESTLOGITEM_H
#define BLTREMOTEREQUESTLOGITEM_H

@class NSDate, NSString, NSNumber, NSUUID;

#import <Foundation/Foundation.h>


@interface BLTRemoteRequestLogItem : NSObject

@property (retain, nonatomic) NSDate *cacheDate; // ivar: _cacheDate
@property (copy, nonatomic) NSString *idsResponseIdentifier; // ivar: _idsResponseIdentifier
@property (copy, nonatomic) NSString *idsTransmitIdentifier; // ivar: _idsTransmitIdentifier
@property (copy, nonatomic) id *requestDescription; // ivar: _requestDescription
@property (retain, nonatomic) NSNumber *sequenceNumber; // ivar: _sequenceNumber
@property (retain, nonatomic) NSUUID *sessionIdentifier; // ivar: _sessionIdentifier
@property (nonatomic) NSUInteger sessionState; // ivar: _sessionState


+(id)remoteRequestLogItemWithIDSTransmitIdentifier:(id)arg0 IDSResponseIdentifier:(id)arg1 requestDescription:(id)arg2 sequenceNumber:(id)arg3 sessionIdentifier:(id)arg4 sessionState:(NSUInteger)arg5 ;
-(id)description;


@end


#endif