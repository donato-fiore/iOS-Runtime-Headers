// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKENTITLEDCONTEXTPROVIDER_H
#define GKENTITLEDCONTEXTPROVIDER_H


#import <Foundation/Foundation.h>


@interface GKEntitledContextProvider : NSObject



+(BOOL)isEntitledToUseGroupActivities;
+(id)getCurrentDeviceName;
-(id)init;


@end


#endif