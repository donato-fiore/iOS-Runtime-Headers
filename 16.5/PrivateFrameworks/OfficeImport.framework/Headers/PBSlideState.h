// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBSLIDESTATE_H
#define PBSLIDESTATE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PBSlideState : NSObject {
    NSMutableDictionary *mBuildOrderMap;
    unsigned int mCurrentGroupId;
}




-(id)buildOrderMap;
-(id)init;
-(unsigned int)generateGroupId;
-(void)addBuild:(id)arg0 order:(unsigned int)arg1 ;
-(void)reset;


@end


#endif