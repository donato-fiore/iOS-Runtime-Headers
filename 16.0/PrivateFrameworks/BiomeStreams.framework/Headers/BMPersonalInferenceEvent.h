// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMPERSONALINFERENCEEVENT_H
#define BMPERSONALINFERENCEEVENT_H

@class NSNumber, NSString, NSArray;
@protocol BMStoreData, BMProtoBufWrapper;

#import <Foundation/Foundation.h>

#import "BMPersonalFact.h"

@interface BMPersonalInferenceEvent : NSObject <BMStoreData, BMProtoBufWrapper>



@property (readonly, nonatomic) NSNumber *confidence; // ivar: _confidence
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BMPersonalFact *fact; // ivar: _fact
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int modelVersion; // ivar: _modelVersion
@property (readonly, nonatomic) NSArray *qualifiers; // ivar: _qualifiers
@property (readonly) Class superclass;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(id)encodeAsProto;
-(id)initWithFact:(id)arg0 modelVersion:(unsigned int)arg1 confidence:(id)arg2 qualifiers:(id)arg3 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)proto;
-(id)serialize;


@end


#endif