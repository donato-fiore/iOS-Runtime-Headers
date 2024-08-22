// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCHLSPLAYLISTSTATE_H
#define FCHLSPLAYLISTSTATE_H

@class NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>

#import "FCHLSMap.h"
#import "FCHLSStreamInf.h"
#import "FCHLSKey.h"

@interface FCHLSPlaylistState : NSObject {
    NSMutableDictionary *_mutableGroups;
    FCHLSMap *_currentMap;
    CGFloat _currentDuration;
    NSMutableArray *_mutableSegments;
    FCHLSStreamInf *_currentStreamInf;
    NSMutableArray *_mutableStreamInfs;
    FCHLSKey *_currentKey;
    NSMutableDictionary *_mutableSessionData;
}




-(id)init;


@end


#endif