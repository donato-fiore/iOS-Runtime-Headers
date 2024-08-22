// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPPACKAGEDATAREADER_H
#define TSPPACKAGEDATAREADER_H

@class NSString, TSUOnce, NSURL, NSData, SFUCryptoKey;
@protocol TSPFileCoordinatorDelegate, TSPPassphraseConsumer;

#import <Foundation/Foundation.h>

#import "TSPPackage.h"
#import "TSPDocumentProperties.h"

@interface TSPPackageDataReader : NSObject <TSPFileCoordinatorDelegate, TSPPassphraseConsumer>

 {
    TSPPackage *_package;
    NSString *_lastPasswordAttempted;
    map<const std::string, TSP::DataInfo, std::less<const std::string>, std::allocator<std::pair<const std::string, TSP::DataInfo>>> _dataInfos;
    TSUOnce *_dataInfosDispatchOnce;
}


@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSPDocumentProperties *documentProperties;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isPasswordProtected;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) NSData *keychainGenericItem;
@property (readonly, nonatomic) SFUCryptoKey *lastDecryptionKeyAttempted;
@property (readonly, nonatomic) NSString *lastPasswordAttempted;
@property (readonly, nonatomic) NSInteger packageType;
@property (readonly, nonatomic) NSString *passphraseHint;
@property (readonly, nonatomic) NSString *passwordHint;
@property (readonly, nonatomic) BOOL requiresNetworkValidation;
@property (readonly) Class superclass;


-(*void)infoForDigest:(id)arg0 ;
-(BOOL)checkPassword:(id)arg0 ;
-(BOOL)hasDataAtRelativePath:(id)arg0 ;
-(BOOL)setPassphrase:(id)arg0 ;
-(id)decryptionInfoForDataWithDigest:(id)arg0 ;
-(id)init;
-(id)initWithURL:(id)arg0 decryptionKey:(id)arg1 ;
-(id)newDataCopyInputStreamProviderWithDigest:(id)arg0 encryptionInfo:(id)arg1 error:(*id)arg2 ;
-(id)newDataCopyReadChannelProviderWithDigest:(id)arg0 encryptionInfo:(id)arg1 error:(*id)arg2 ;
-(id)newDataCopyReadChannelProviderWithDigest:(id)arg0 encryptionInfo:(id)arg1 length:(*NSUInteger)arg2 error:(*id)arg3 ;
-(id)newDataCopyURLProviderWithDigest:(id)arg0 encryptionInfo:(id)arg1 error:(*id)arg2 ;
-(id)relativePathForDataWithDigest:(id)arg0 ;
-(struct CGDataProvider *)newCGDataProviderAtRelativePath:(id)arg0 ;
-(struct CGImage *)newCGImageAtRelativePath:(id)arg0 ;
-(struct CGImageSource *)newCGImageSourceAtRelativePath:(id)arg0 ;
-(void)performReadUsingAccessor:(id)arg0 ;


@end


#endif