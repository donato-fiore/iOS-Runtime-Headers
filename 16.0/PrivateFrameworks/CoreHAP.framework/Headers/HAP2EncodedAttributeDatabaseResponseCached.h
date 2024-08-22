// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAP2ENCODEDATTRIBUTEDATABASERESPONSECACHED_H
#define HAP2ENCODEDATTRIBUTEDATABASERESPONSECACHED_H

@class NSDictionary, NSString;
@protocol HAP2EncodedAttributeDatabaseResponse;


#import "HAP2LoggingObject.h"

@interface HAP2EncodedAttributeDatabaseResponseCached : HAP2LoggingObject <HAP2EncodedAttributeDatabaseResponse>



@property (readonly, nonatomic) NSDictionary *attributeDatabase; // ivar: _attributeDatabase
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEncrypted) BOOL encrypted;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAttributeDatabase:(id)arg0 ;


@end


#endif