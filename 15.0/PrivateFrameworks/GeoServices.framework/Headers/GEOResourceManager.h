// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORESOURCEMANAGER_H
#define GEORESOURCEMANAGER_H


#import <Foundation/Foundation.h>

#import "GEOResourceManifestConfiguration.h"

@interface GEOResourceManager : NSObject {
    GEOResourceManifestConfiguration *_configuration;
}




+(id)sharedManager;
+(id)sharedManagerForConfiguration:(id)arg0 ;
-(BOOL)isDevResourceWithName:(id)arg0 fallbackBundle:(id)arg1 fallbackNameHandler:(id)arg2 ;
-(id)allResourceNames;
-(id)dataForResourceWithName:(id)arg0 fallbackBundle:(id)arg1 ;
-(id)dataForResourceWithName:(id)arg0 fallbackBundle:(id)arg1 fallbackNameHandler:(id)arg2 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)pathForResourceWithName:(id)arg0 fallbackBundle:(id)arg1 ;
-(id)pathForResourceWithName:(id)arg0 fallbackBundle:(id)arg1 fallbackNameHandler:(id)arg2 ;
// -(void)dataForSignedResourceWithName:(id)arg0 fallbackBundle:(id)arg1 fallbackNameHandler:(id)arg2 resultHandler:(unk)arg3  ;


@end


#endif