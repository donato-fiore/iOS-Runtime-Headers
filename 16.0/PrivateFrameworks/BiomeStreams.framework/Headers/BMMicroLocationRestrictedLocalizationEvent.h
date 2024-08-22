// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMMICROLOCATIONRESTRICTEDLOCALIZATIONEVENT_H
#define BMMICROLOCATIONRESTRICTEDLOCALIZATIONEVENT_H

@class NSString, NSUUID, NSArray;
@protocol BMStoreData, BMProtoBufWrapper;

#import <Foundation/Foundation.h>


@interface BMMicroLocationRestrictedLocalizationEvent : NSObject <BMStoreData, BMProtoBufWrapper>



@property (readonly, nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (readonly, copy, nonatomic) NSString *clientBundleIdentifier; // ivar: _clientBundleIdentifier
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat maxProbability; // ivar: _maxProbability
@property (readonly, copy, nonatomic) NSUUID *maxProbabilityLabelIdentifier; // ivar: _maxProbabilityLabelIdentifier
@property (readonly, nonatomic) NSArray *numDevicesVector; // ivar: _numDevicesVector
@property (readonly, nonatomic) NSArray *probabilityVector; // ivar: _probabilityVector
@property (readonly) Class superclass;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)initWithAbsoluteTimeStamp:(CGFloat)arg0 clientBundleIdentifier:(id)arg1 maxProbabilityLabelIdentifier:(id)arg2 maxProbability:(CGFloat)arg3 probabilityVector:(id)arg4 numDevicesVector:(id)arg5 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)proto;
-(id)serialize;


@end


#endif