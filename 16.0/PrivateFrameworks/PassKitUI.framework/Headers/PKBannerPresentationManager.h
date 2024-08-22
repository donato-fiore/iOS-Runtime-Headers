// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKBANNERPRESENTATIONMANAGER_H
#define PKBANNERPRESENTATIONMANAGER_H

@class NSString, BNBannerSource;
@protocol BNBannerSourceDelegate, PKBannerPresentableProvider;

#import <Foundation/Foundation.h>

#import "PKBannerPresentableRequest.h"

@interface PKBannerPresentationManager : NSObject <BNBannerSourceDelegate>

 {
    NSInteger _destination;
    id<PKBannerPresentableProvider> *_provider;
    NSString *_requesterIdentifier;
    BNBannerSource *_source;
    PKBannerPresentableRequest *_request;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) id *provider;
@property (readonly) Class superclass;


+(id)_managerForDestination:(NSInteger)arg0 withProvider:(id)arg1 ;
-(id)_createPresentableWithConfiguration:(id)arg0 ;
-(id)_currentRequest;
-(id)init;
-(void)_setNeedsUpdate;
-(void)bannerSourceDidInvalidate:(id)arg0 ;


@end


#endif