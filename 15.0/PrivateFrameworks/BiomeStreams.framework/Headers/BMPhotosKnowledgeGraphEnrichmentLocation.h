// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMPHOTOSKNOWLEDGEGRAPHENRICHMENTLOCATION_H
#define BMPHOTOSKNOWLEDGEGRAPHENRICHMENTLOCATION_H

@class NSString, NSData;
@protocol BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating;

#import <Foundation/Foundation.h>


@interface BMPhotosKnowledgeGraphEnrichmentLocation : NSObject <BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>



@property (readonly, nonatomic) NSString *city; // ivar: _city
@property (readonly, nonatomic) NSString *country; // ivar: _country
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSData *encodedLocation; // ivar: _encodedLocation
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *state; // ivar: _state
@property (readonly, nonatomic) NSString *street; // ivar: _street
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isCompleteWithContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValidWithContext:(id)arg0 error:(*id)arg1 ;
-(id)encodeAsProto;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithStreet:(id)arg0 city:(id)arg1 state:(id)arg2 country:(id)arg3 encodedLocation:(id)arg4 ;
-(id)json;
-(id)jsonDict;
-(id)proto;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif