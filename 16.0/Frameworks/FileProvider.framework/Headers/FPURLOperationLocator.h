// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPURLOPERATIONLOCATOR_H
#define FPURLOPERATIONLOCATOR_H



#import "FPActionOperationLocator.h"

@interface FPURLOperationLocator : FPActionOperationLocator {
    BOOL _attachSandboxExtensionOnXPCEncoding;
    NSInteger _size;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isDownloaded;
-(BOOL)isExternalURL;
-(BOOL)isFolder;
-(BOOL)requiresCrossDeviceCopy;
-(NSUInteger)size;
-(id)description;
-(id)filename;
-(id)identifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObject:(id)arg0 ;
-(id)parentIdentifier;
-(void)attachSandboxExtensionOnXPCEncoding;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif