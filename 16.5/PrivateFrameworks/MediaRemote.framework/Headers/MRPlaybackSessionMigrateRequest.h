// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRPLAYBACKSESSIONMIGRATEREQUEST_H
#define MRPLAYBACKSESSIONMIGRATEREQUEST_H

@class NSError, NSString, NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "_MRPlaybackSessionMigrateRequestProtobuf.h"
#import "MRContentItem.h"
#import "MRPlaybackSessionRequest.h"

@interface MRPlaybackSessionMigrateRequest : NSObject <NSCopying>

 {
    _MRPlaybackSessionMigrateRequestProtobuf *_protobuf;
    NSError *_migrateError;
    NSError *_fallbackError;
}


@property (nonatomic) BOOL allowFadeTransition;
@property (retain, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (retain, nonatomic) MRContentItem *contentItem;
@property (nonatomic) unsigned int destinationTypes;
@property (readonly, nonatomic) CGFloat duration;
@property (nonatomic) NSInteger endpointOptions;
@property (nonatomic) NSUInteger fallbackReason; // ivar: _fallbackReason
@property (retain, nonatomic) NSString *initiator;
@property (nonatomic) unsigned int originatorType;
@property (nonatomic) CGFloat playbackPosition;
@property (nonatomic) CGFloat playbackRate;
@property (retain, nonatomic) MRPlaybackSessionRequest *playbackSessionRequest;
@property (nonatomic) NSInteger playbackSessionSize; // ivar: _playbackSessionSize
@property (nonatomic) unsigned int playbackState;
@property (nonatomic) NSInteger playerOptions;
@property (readonly, nonatomic) _MRPlaybackSessionMigrateRequestProtobuf *protobuf;
@property (readonly, nonatomic) NSData *protobufData;
@property (readonly, nonatomic) NSString *report;
@property (retain, nonatomic) NSString *requestID;
@property (nonatomic) NSUInteger requestType; // ivar: _requestType


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)addDestinationType:(unsigned int)arg0 ;
-(void)addDestinationTypesFromDevices:(id)arg0 ;
-(void)endEvent:(id)arg0 ;
-(void)endEvent:(id)arg0 withError:(id)arg1 ;
-(void)finalize;
-(void)merge:(id)arg0 ;
-(void)startEvent:(id)arg0 ;


@end


#endif