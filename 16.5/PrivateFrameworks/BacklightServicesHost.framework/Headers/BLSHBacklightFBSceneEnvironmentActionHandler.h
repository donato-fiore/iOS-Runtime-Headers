// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHBACKLIGHTFBSCENEENVIRONMENTACTIONHANDLER_H
#define BLSHBACKLIGHTFBSCENEENVIRONMENTACTIONHANDLER_H

@class NSString;
@protocol BLSSceneActionHandler;

#import <Foundation/Foundation.h>


@interface BLSHBacklightFBSceneEnvironmentActionHandler : NSObject <BLSSceneActionHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)respondToActions:(id)arg0 forFBScene:(id)arg1 ;


@end


#endif