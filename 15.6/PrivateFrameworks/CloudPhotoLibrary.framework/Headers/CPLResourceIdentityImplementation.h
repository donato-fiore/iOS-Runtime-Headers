// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLRESOURCEIDENTITYIMPLEMENTATION_H
#define CPLRESOURCEIDENTITYIMPLEMENTATION_H



#import "CPLResourceIdentity.h"

@interface CPLResourceIdentityImplementation : CPLResourceIdentity



+(BOOL)isValidMMCSV2Signature:(id)arg0 ;
+(id)_fingerPrintForFD:(int)arg0 typeIdentifier:(id)arg1 error:(*id)arg2 ;
+(id)extensionForFileUTI:(id)arg0 ;
+(id)fileUTIForExtension:(id)arg0 ;
+(id)fingerPrintForData:(id)arg0 typeIdentifier:(id)arg1 error:(*id)arg2 ;
+(id)fingerPrintForFD:(int)arg0 typeIdentifier:(id)arg1 error:(*id)arg2 ;
+(id)fingerPrintForFileAtURL:(id)arg0 typeIdentifier:(id)arg1 error:(*id)arg2 ;
+(id)identityForStorageName:(id)arg0 ;
+(id)identityFromStoredIdentity:(id)arg0 ;
+(id)storageNameForFingerPrint:(id)arg0 fileUTI:(id)arg1 bucket:(*id)arg2 ;
+(id)zeroByteFileFingerPrint;
+(void)setMMCImplementationForPlatform:(id)arg0 ;
-(id)identityForStorage;


@end


#endif