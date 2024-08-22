// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKSLINKINGSINGLETON_H
#define GKSLINKINGSINGLETON_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface GKSLinkingSingleton : NSObject {
    NSMutableDictionary *handleSoFar;
}




+(id)defaultGKSLinkingSingleton;
-(*void)handleForBinaryPath:(id)arg0 ;


@end


#endif