// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDMCLIENT_H
#define CDMCLIENT_H

@class NSString, NSError;
@protocol CDMClientDelegate;

#import <Foundation/Foundation.h>

#import "CDMServiceCenter.h"

@interface CDMClient : NSObject {
    id<CDMClientDelegate> *_delegate;
    CDMServiceCenter *_serviceCenter;
    NSString *_localeIdentifier;
}


@property (readonly, nonatomic) NSError *errorFromSetup; // ivar: _errorFromSetup
@property (readonly, nonatomic) BOOL successFromSetup; // ivar: _successFromSetup


+(id)createEmptyNluRequestId;
-(BOOL)areAssetsAvailable:(id)arg0 ;
-(BOOL)isLighthouseAPIEnabled;
-(BOOL)registerWithAssetsDelegate:(id)arg0 ;
-(BOOL)registerWithAssetsDelegate:(id)arg0 forLocale:(id)arg1 ;
-(id)createNSError:(id)arg0 errorCode:(NSInteger)arg1 ;
-(id)getLocaleIdentifier;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)doServiceCenterHandleCommand:(id)arg0 forCallback:(id)arg1 ;
-(void)doServiceCenterInitWithConfig:(id)arg0 ;
-(void)handleOverridesAssetUpdateEvent:(id)arg0 ;
-(void)processCDMNluRequest:(id)arg0 ;
-(void)setup:(id)arg0 ;


@end


#endif