// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMPHOTOSKNOWLEDGEGRAPHENRICHMENTTOPIC_H
#define BMPHOTOSKNOWLEDGEGRAPHENRICHMENTTOPIC_H

@class NSString;
@protocol BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating;

#import <Foundation/Foundation.h>


@interface BMPhotosKnowledgeGraphEnrichmentTopic : NSObject <BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) CGFloat score; // ivar: _score
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isCompleteWithContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValidWithContext:(id)arg0 error:(*id)arg1 ;
-(id)encodeAsProto;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 score:(CGFloat)arg1 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)json;
-(id)jsonDict;
-(id)proto;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif