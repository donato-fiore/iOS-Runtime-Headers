// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICRADIOURLREQUEST_H
#define ICRADIOURLREQUEST_H

@class NSNumber;


#import "ICStoreURLRequest.h"

@interface ICRadioURLRequest : ICStoreURLRequest

@property (nonatomic, getter=isBackgroundRadioRequest) BOOL backgroundRadioRequest; // ivar: _backgroundRadioRequest
@property (copy, nonatomic, getter=isDelegatedPrivateListeningEnabled) NSNumber *delegatedPrivateListeningEnabled; // ivar: _delegatedPrivateListeningEnabled
@property (copy, nonatomic, getter=isPrivateListeningEnabled) NSNumber *privateListeningEnabled; // ivar: _privateListeningEnabled
@property (nonatomic) NSInteger protocolVersion; // ivar: _protocolVersion
@property (copy, nonatomic) id *radioContentDictionaryCreationBlock; // ivar: _radioContentDictionaryCreationBlock


-(id)initWithURLRequest:(id)arg0 requestContext:(id)arg1 ;
-(void)_decorateHeaderPropertiesForURLRequest:(id)arg0 withBuilderProperties:(id)arg1 ;
-(void)buildStoreURLRequestWithURLRequest:(id)arg0 builderProperties:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif