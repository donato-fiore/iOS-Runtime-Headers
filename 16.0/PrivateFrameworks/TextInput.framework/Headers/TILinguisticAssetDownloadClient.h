// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TILINGUISTICASSETDOWNLOADCLIENT_H
#define TILINGUISTICASSETDOWNLOADCLIENT_H

@protocol TILinguisticAssetDownloading;

#import <Foundation/Foundation.h>


@interface TILinguisticAssetDownloadClient : NSObject <TILinguisticAssetDownloading>





+(id)_dispatchQueue;
+(id)_internalAssertionRequestHandlerForHandler:(SEL)arg0 connection:(id)arg1 ;
+(id)_internalHandlerForHandler:(SEL)arg0 connection:(id)arg1 ;
-(id)_newXPCConnection;
-(void)addLinguisticAssetsAssertionForLanguage:(id)arg0 assertionID:(id)arg1 region:(id)arg2 clientID:(id)arg3 withHandler:(id)arg4 ;
-(void)removeLinguisticAssetsAssertionWithIdentifier:(id)arg0 forClientID:(id)arg1 withHandler:(id)arg2 ;
-(void)requestLinguisticAssetsForLanguage:(id)arg0 completion:(id)arg1 ;


@end


#endif