// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAP2ENCODEDATTRIBUTEDATABASERESPONSETHREAD_H
#define HAP2ENCODEDATTRIBUTEDATABASERESPONSETHREAD_H

@class NSDictionary, NSString;
@protocol HAP2EncodedAttributeDatabaseResponse;


#import "HAP2EncodedResponseThread.h"

@interface HAP2EncodedAttributeDatabaseResponseThread : HAP2EncodedResponseThread <HAP2EncodedAttributeDatabaseResponse>



@property (readonly, nonatomic) NSDictionary *attributeDatabase; // ivar: _attributeDatabase
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEncrypted) BOOL encrypted;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithBTLEResponse:(id)arg0 attributeDatabase:(id)arg1 ;


@end


#endif