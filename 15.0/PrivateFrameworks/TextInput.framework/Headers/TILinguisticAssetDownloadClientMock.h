// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TILINGUISTICASSETDOWNLOADCLIENTMOCK_H
#define TILINGUISTICASSETDOWNLOADCLIENTMOCK_H

@class NSError;
@protocol TILinguisticAssetDownloading;

#import <Foundation/Foundation.h>


@interface TILinguisticAssetDownloadClientMock : NSObject <TILinguisticAssetDownloading>



@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSInteger result; // ivar: _result


-(id)init;
-(id)initWithResult:(NSInteger)arg0 error:(id)arg1 ;
-(void)addLinguisticAssetsAssertionForLanguage:(id)arg0 assertionID:(id)arg1 region:(id)arg2 clientID:(id)arg3 withHandler:(id)arg4 ;
-(void)removeLinguisticAssetsAssertionWithIdentifier:(id)arg0 forClientID:(id)arg1 withHandler:(id)arg2 ;
-(void)requestLinguisticAssetsForLanguage:(id)arg0 completion:(id)arg1 ;


@end


#endif