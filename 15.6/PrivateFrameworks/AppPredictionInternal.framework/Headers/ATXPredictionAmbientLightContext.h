// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPREDICTIONAMBIENTLIGHTCONTEXT_H
#define ATXPREDICTIONAMBIENTLIGHTCONTEXT_H



#import "ATXPredictionContextDomain.h"

@interface ATXPredictionAmbientLightContext : ATXPredictionContextDomain

@property (readonly, nonatomic) int ambientLightType; // ivar: _ambientLightType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXPredictionAmbientLightContext:(id)arg0 ;
-(id)description;
-(id)encodeAsProto;
-(id)initWithAmbientLightType:(int)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)jsonDict;
-(id)proto;


@end


#endif