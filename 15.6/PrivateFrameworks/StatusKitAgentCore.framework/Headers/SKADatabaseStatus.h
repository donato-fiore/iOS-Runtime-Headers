// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKADATABASESTATUS_H
#define SKADATABASESTATUS_H

@class NSString, NSDate, NSData;

#import <Foundation/Foundation.h>


@interface SKADatabaseStatus : NSObject

@property (readonly, copy, nonatomic) NSString *channelIdentifier; // ivar: _channelIdentifier
@property (readonly, copy, nonatomic) NSDate *dateCreated; // ivar: _dateCreated
@property (readonly, copy, nonatomic) NSDate *dateExpired; // ivar: _dateExpired
@property (readonly, copy, nonatomic) NSDate *datePublished; // ivar: _datePublished
@property (readonly, copy, nonatomic) NSDate *dateReceived; // ivar: _dateReceived
@property (readonly, nonatomic) BOOL isExpired;
@property (readonly, nonatomic) NSData *rawData; // ivar: _rawData
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


+(id)logger;
-(id)description;
-(id)initWithChannelIdentifier:(id)arg0 dateCreated:(id)arg1 datePublished:(id)arg2 dateReceived:(id)arg3 dateExpired:(id)arg4 rawData:(id)arg5 uniqueIdentifier:(id)arg6 ;
-(id)initWithCoreDataStatus:(id)arg0 ;


@end


#endif