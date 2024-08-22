// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFLOCALSTORAGEFILELOCATION_H
#define WFLOCALSTORAGEFILELOCATION_H



#import "WFFileProviderLocation.h"

@interface WFLocalStorageFileLocation : WFFileProviderLocation



+(BOOL)canRepresentURL:(id)arg0 item:(id)arg1 parentItems:(id)arg2 ;
+(id)subpathFromURL:(id)arg0 ;
+(id)subpathFromURL:(id)arg0 item:(id)arg1 ;
-(BOOL)isSupportedOnCurrentPlatform;
-(id)resolveLocationWithError:(*id)arg0 ;


@end


#endif