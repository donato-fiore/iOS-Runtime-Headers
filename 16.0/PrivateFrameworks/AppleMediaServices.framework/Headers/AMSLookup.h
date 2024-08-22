// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSLOOKUP_H
#define AMSLOOKUP_H

@class NSString;
@protocol AMSBagConsumer, AMSBagProtocol;


#import "AMSTask.h"
#import "AMSProcessInfo.h"

@interface AMSLookup : AMSTask <AMSBagConsumer>



@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (retain, nonatomic) NSString *caller; // ivar: _caller
@property (retain, nonatomic) AMSProcessInfo *clientInfo; // ivar: _clientInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *imageProfile; // ivar: _imageProfile
@property (retain, nonatomic) NSString *keyProfile; // ivar: _keyProfile
@property (retain, nonatomic) NSString *language; // ivar: _language
@property (retain, nonatomic) NSString *platform; // ivar: _platform
@property (nonatomic) NSInteger signatureType; // ivar: _signatureType
@property (readonly) Class superclass;
@property (nonatomic) NSInteger version; // ivar: _version


+(id)createBagForSubProfile;
-(id)_compileQueryParametersWithBundleIds:(id)arg0 itemIds:(id)arg1 ;
-(id)contract;
-(id)initWithBag:(id)arg0 caller:(id)arg1 keyProfile:(id)arg2 ;
-(id)initWithBagContract:(id)arg0 ;
-(id)initWithBagContract:(id)arg0 caller:(id)arg1 keyProfile:(id)arg2 ;
-(id)performLookupWithBundleIdentifiers:(id)arg0 itemIdentifiers:(id)arg1 ;
-(void)_addJSSignatureToRequest:(id)arg0 ;
-(void)setContract:(id)arg0 ;


@end


#endif