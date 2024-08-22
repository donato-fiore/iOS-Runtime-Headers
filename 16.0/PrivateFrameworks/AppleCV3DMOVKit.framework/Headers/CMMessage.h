// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMMESSAGE_H
#define CMMESSAGE_H

@class NSData, NSString, NSNumber, NSArray, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CMMessage : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSData *cmAdditionalData; // ivar: _cmAdditionalData
@property (retain, nonatomic) NSData *cmData; // ivar: _cmData
@property (nonatomic) NSInteger cmDataType; // ivar: _cmDataType
@property (retain, nonatomic) NSString *fromPeerDisplayName; // ivar: _fromPeerDisplayName
@property (nonatomic) BOOL isSent; // ivar: _isSent
@property (nonatomic) NSUInteger messageType; // ivar: _messageType
@property (retain, nonatomic) NSNumber *movLowestTimestamp; // ivar: _movLowestTimestamp
@property (retain, nonatomic) NSNumber *sessionID; // ivar: _sessionID
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSArray *toPeerDisplays; // ivar: _toPeerDisplays
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMessageType:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif