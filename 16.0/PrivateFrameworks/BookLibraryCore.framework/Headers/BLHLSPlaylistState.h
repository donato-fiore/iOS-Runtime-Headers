// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLHLSPLAYLISTSTATE_H
#define BLHLSPLAYLISTSTATE_H

@class NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>

#import "BLHLSKey.h"
#import "BLHLSMap.h"
#import "BLHLSStreamInf.h"

@interface BLHLSPlaylistState : NSObject

@property (nonatomic) CGFloat currentDuration; // ivar: _currentDuration
@property (retain, nonatomic) BLHLSKey *currentKey; // ivar: _currentKey
@property (retain, nonatomic) BLHLSMap *currentMap; // ivar: _currentMap
@property (retain, nonatomic) BLHLSStreamInf *currentStreamInf; // ivar: _currentStreamInf
@property (retain, nonatomic) NSMutableDictionary *mutableGroups; // ivar: _mutableGroups
@property (retain, nonatomic) NSMutableArray *mutableSegments; // ivar: _mutableSegments
@property (retain, nonatomic) NSMutableArray *mutableStreamInfs; // ivar: _mutableStreamInfs


-(id)init;


@end


#endif