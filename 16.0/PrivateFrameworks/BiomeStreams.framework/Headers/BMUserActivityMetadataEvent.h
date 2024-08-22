// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMUSERACTIVITYMETADATAEVENT_H
#define BMUSERACTIVITYMETADATAEVENT_H

@class NSString, NSArray, NSData;
@protocol BMStoreData, BMProtoBufWrapper;

#import <Foundation/Foundation.h>


@interface BMUserActivityMetadataEvent : NSObject <BMStoreData, BMProtoBufWrapper>



@property (readonly, nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (readonly, nonatomic) NSString *activityType; // ivar: _activityType
@property (readonly, nonatomic) NSString *associatedBundleId; // ivar: _associatedBundleId
@property (readonly, nonatomic) NSString *associatedURLString; // ivar: _associatedURLString
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAssociatedImageRepresentation; // ivar: _hasAssociatedImageRepresentation
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *modeIdentifier; // ivar: _modeIdentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSArray *topics; // ivar: _topics
@property (readonly, copy, nonatomic) NSData *userActivityData; // ivar: _userActivityData
@property (readonly, nonatomic) NSString *uuid; // ivar: _uuid


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)initWithAbsoluteTimestamp:(CGFloat)arg0 userActivityData:(id)arg1 title:(id)arg2 activityType:(id)arg3 associatedBundleId:(id)arg4 associatedURLString:(id)arg5 modeIdentifier:(id)arg6 topics:(id)arg7 hasAssociatedImageRepresentation:(BOOL)arg8 uuid:(id)arg9 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)json;
-(id)jsonDict;
-(id)proto;
-(id)serialize;


@end


#endif