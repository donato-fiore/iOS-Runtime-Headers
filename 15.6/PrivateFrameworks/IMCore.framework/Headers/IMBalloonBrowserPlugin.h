// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMBALLOONBROWSERPLUGIN_H
#define IMBALLOONBROWSERPLUGIN_H



#import "IMBalloonPlugin.h"

@interface IMBalloonBrowserPlugin : IMBalloonPlugin



-(BOOL)isBetaPlugin;
-(id)initWithIdentifier:(id)arg0 browserDisplayName:(id)arg1 browserImageName:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 browserDisplayName:(id)arg1 browserImageName:(id)arg2 browserClass:(Class)arg3 presentationContext:(NSUInteger)arg4 ;
-(id)version;


@end


#endif