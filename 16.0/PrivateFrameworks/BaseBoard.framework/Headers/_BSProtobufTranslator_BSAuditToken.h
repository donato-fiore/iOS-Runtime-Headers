// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _BSPROTOBUFTRANSLATOR_BSAUDITTOKEN_H
#define _BSPROTOBUFTRANSLATOR_BSAUDITTOKEN_H

@class NSString, NSData;
@protocol BSProtobufSerializable;

#import <Foundation/Foundation.h>


@interface _BSProtobufTranslator_BSAuditToken : NSObject <BSProtobufSerializable>



@property (retain) NSString *bundleID; // ivar: _bundleID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain) NSData *tokenData; // ivar: _tokenData


+(id)protobufSchema;
-(id)didFinishProtobufDecodingWithError:(*id)arg0 ;
-(id)initProtobufTranslatorForObject:(id)arg0 ;


@end


#endif