// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFABSOLUTEPATHFILELOCATION_H
#define WFABSOLUTEPATHFILELOCATION_H



#import "WFFilePathLocation.h"

@interface WFAbsolutePathFileLocation : WFFilePathLocation



+(BOOL)canRepresentURL:(id)arg0 ;
+(id)subpathFromURL:(id)arg0 ;
-(BOOL)isSupportedOnCurrentPlatform;
-(id)resolveLocationWithError:(*id)arg0 ;


@end


#endif