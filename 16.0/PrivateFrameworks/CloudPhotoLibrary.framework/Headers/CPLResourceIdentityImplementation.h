// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLRESOURCEIDENTITYIMPLEMENTATION_H
#define CPLRESOURCEIDENTITYIMPLEMENTATION_H



#import "CPLResourceIdentity.h"

@interface CPLResourceIdentityImplementation : CPLResourceIdentity



+(BOOL)isValidMMCSV2Signature:(id)arg0 ;
+(id)_fingerPrintForFD:(int)arg0 error:(*id)arg1 ;
+(id)extensionForFileUTI:(id)arg0 ;
+(id)fileUTIForExtension:(id)arg0 ;
+(id)fingerPrintForData:(id)arg0 error:(*id)arg1 ;
+(id)fingerPrintForFD:(int)arg0 error:(*id)arg1 ;
+(id)fingerPrintForFileAtURL:(id)arg0 error:(*id)arg1 ;
+(id)identityForStorageName:(id)arg0 ;
+(id)identityFromStoredIdentity:(id)arg0 ;
+(id)storageNameForFingerPrint:(id)arg0 fileUTI:(id)arg1 bucket:(*id)arg2 ;
+(id)zeroByteFileFingerPrint;
+(void)setMMCImplementationForPlatform:(id)arg0 ;
-(id)identityForStorage;


@end


#endif