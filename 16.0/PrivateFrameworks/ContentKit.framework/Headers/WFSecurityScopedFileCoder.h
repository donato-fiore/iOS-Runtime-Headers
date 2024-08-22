// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSECURITYSCOPEDFILECODER_H
#define WFSECURITYSCOPEDFILECODER_H



#import "WFFileCoder.h"

@interface WFSecurityScopedFileCoder : WFFileCoder



+(BOOL)supportsSecureCoding;
-(id)decodeFileWithCoder:(id)arg0 fileShouldBeDeletedOnDeallocation:(*BOOL)arg1 fileIsSecurityScoped:(*BOOL)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)sharedDirectory;
-(id)sharedTemporaryDirectory;
-(void)archiveFileAtURL:(id)arg0 fileShouldBeDeletedOnDeallocation:(BOOL)arg1 withCoder:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)waitForFileAvailabilityWithCompletionHandler:(id)arg0 ;


@end


#endif