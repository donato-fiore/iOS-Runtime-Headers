// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIREMOTEASSETPATCHER_H
#define TRIREMOTEASSETPATCHER_H

@protocol TRIAssetPatching;

#import <Foundation/Foundation.h>


@interface TRIRemoteAssetPatcher : NSObject <TRIAssetPatching>





-(BOOL)applyPatchWithFilename:(id)arg0 toSrcDir:(id)arg1 writingToEmptyDestDir:(id)arg2 postPatchCompression:(struct ? )arg3 error:(*id)arg4 ;
-(id)_tokenForSandboxExtensionWithClass:(char *)arg0 path:(id)arg1 ;


@end


#endif