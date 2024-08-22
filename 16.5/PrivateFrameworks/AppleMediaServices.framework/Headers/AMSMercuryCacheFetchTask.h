// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSMERCURYCACHEFETCHTASK_H
#define AMSMERCURYCACHEFETCHTASK_H

@class ACAccount, NSSet, NSString;
@protocol AMSBagConsumer, AMSBagProtocol;


#import "AMSTask.h"
#import "AMSProcessInfo.h"

@interface AMSMercuryCacheFetchTask : AMSTask <AMSBagConsumer>



@property (readonly, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (readonly, nonatomic) NSSet *cacheTypeIDs; // ivar: _cacheTypeIDs
@property (readonly, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (retain, nonatomic) AMSProcessInfo *clientInfo; // ivar: _clientInfo
@property (readonly, nonatomic) NSString *clientVersion; // ivar: _clientVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *logKey; // ivar: _logKey
@property (readonly) Class superclass;


+(id)createBagForSubProfile;
+(id)requestEncoderWithSharedProperties:(id)arg0 task:(id)arg1 ;
+(id)sharedPropertiesFromTask:(id)arg0 ;
-(id)_updateEndpointURLRequestWithError:(*id)arg0 ;
-(id)initWithAccount:(id)arg0 bag:(id)arg1 cacheTypeIDs:(id)arg2 clientIdentifier:(id)arg3 clientVersion:(id)arg4 ;
-(id)perform;


@end


#endif