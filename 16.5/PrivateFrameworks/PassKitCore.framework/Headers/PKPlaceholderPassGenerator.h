// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPLACEHOLDERPASSGENERATOR_H
#define PKPLACEHOLDERPASSGENERATOR_H

@class NSURL, NSArray, NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>

#import "PKPass.h"

@interface PKPlaceholderPassGenerator : NSObject {
    NSURL *_templateDirectory;
    PKPass *_templatePass;
    id *_updateUrlsBlock;
}


@property (copy, nonatomic) NSArray *associatedApplicationIdentifiers;
@property (retain, nonatomic) NSMutableDictionary *passContent; // ivar: _passContent
@property (copy, nonatomic) NSString *primaryAccountIdentifier;
@property (copy, nonatomic) NSString *serialNumber;


+(id)addManifestIfNecessaryToPass:(id)arg0 ;
+(id)manifestForDirectory:(id)arg0 error:(*id)arg1 ;
+(id)manifestSignatureForDirectory:(id)arg0 passCertificate:(id)arg1 appleWWDRCertificate:(id)arg2 certificatePassword:(id)arg3 error:(*id)arg4 ;
-(NSInteger)updatePassUpgradeRequestsWithBlock:(id)arg0 ;
-(NSInteger)updatePaymentApplicationsWithBlock:(id)arg0 ;
-(id)generateAndSignPassWithPassCertificate:(id)arg0 appleWWDRCertificate:(id)arg1 certificatePassword:(id)arg2 error:(*id)arg3 ;
-(id)generatePass;
-(id)initWithPassTemplate:(id)arg0 error:(*id)arg1 ;
-(id)passTypeIdentifier;
-(void)_updatePassURLsConfigrationPassUrl:(id)arg0 ;
-(void)insertPassField:(id)arg0 ;
-(void)insertPaymentApplication:(id)arg0 ;
-(void)setPassTypeIdentifier:(id)arg0 ;
-(void)setUpdatePassRemoteAssetConfigrationsWithBlock:(id)arg0 ;


@end


#endif