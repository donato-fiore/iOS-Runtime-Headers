// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPMEDIAKITENTITYPAYLOADTRANSFORMER_H
#define MPMEDIAKITENTITYPAYLOADTRANSFORMER_H

@class NSMutableDictionary, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface MPMediaKitEntityPayloadTransformer : NSObject

@property (readonly, nonatomic) NSMutableDictionary *attributes; // ivar: _attributes
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSMutableDictionary *meta; // ivar: _meta
@property (readonly, nonatomic) NSMutableDictionary *relationships; // ivar: _relationships
@property (readonly, nonatomic) NSDictionary *transformedPayload;
@property (readonly, nonatomic) NSString *transformedType; // ivar: _transformedType
@property (readonly, nonatomic) NSString *type; // ivar: _type


-(id)initWithType:(id)arg0 transformedType:(id)arg1 ;


@end


#endif