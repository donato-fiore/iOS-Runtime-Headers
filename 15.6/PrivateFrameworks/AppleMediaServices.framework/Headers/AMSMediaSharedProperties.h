// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSMEDIASHAREDPROPERTIES_H
#define AMSMEDIASHAREDPROPERTIES_H

@protocol AMSMediaTokenServiceProtocol;

#import <Foundation/Foundation.h>

#import "AMSURLSession.h"

@interface AMSMediaSharedProperties : NSObject

@property (readonly, nonatomic) AMSURLSession *session; // ivar: _session
@property (readonly, nonatomic) NSObject<AMSMediaTokenServiceProtocol> *tokenService; // ivar: _tokenService


+(id)_propertiesForClientIdentifier:(id)arg0 account:(id)arg1 bag:(id)arg2 clientInfo:(id)arg3 URLKnownToBeTrusted:(BOOL)arg4 ;
+(id)accessQueue;
+(id)propertiesForMarketingItemTask:(id)arg0 ;
+(id)propertiesForMediaTask:(id)arg0 ;
+(id)propertiesForMercuryCacheFetchTask:(id)arg0 ;
+(id)propertiesForRatingsTask:(id)arg0 ;
+(id)propertiesForStorefrontsTask:(id)arg0 ;
+(id)sharedPropertiesMapTable;
-(id)_initWithClientIdentifier:(id)arg0 account:(id)arg1 bag:(id)arg2 clientInfo:(id)arg3 URLKnownToBeTrusted:(BOOL)arg4 ;
-(void)dealloc;


@end


#endif