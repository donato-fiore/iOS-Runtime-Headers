// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CVAUSEREVENT_H
#define CVAUSEREVENT_H

@class NSData, NSNumber, NSString, NSArray, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CVAUserEvent : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSData *anchorData; // ivar: _anchorData
@property (nonatomic) NSUInteger eventType; // ivar: _eventType
@property (retain, nonatomic) NSNumber *movLowestTimestamp; // ivar: _movLowestTimestamp
@property (retain, nonatomic) NSString *peerDisplayName; // ivar: _peerDisplayName
@property (retain, nonatomic) NSNumber *sessionID; // ivar: _sessionID
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSArray *transformCameraToAnchor; // ivar: _transformCameraToAnchor
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
+(id)classes;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEventType:(NSUInteger)arg0 timestamp:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif