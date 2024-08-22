// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMSANDBOXEDFILEURL_H
#define IMSANDBOXEDFILEURL_H



#import "IMSandboxedResource.h"

@interface IMSandboxedFileURL : IMSandboxedResource



+(Class)resourceClass;
-(char *)_sandboxExtensionForPID:(int)arg0 ;
-(id)initWithFileURL:(id)arg0 ;
-(id)initWithFileURL:(id)arg0 destinationProcessPID:(int)arg1 ;


@end


#endif