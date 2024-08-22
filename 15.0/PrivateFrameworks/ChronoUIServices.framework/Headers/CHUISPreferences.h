// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHUISPREFERENCES_H
#define CHUISPREFERENCES_H

@class NSUserDefaults;

#import <Foundation/Foundation.h>


@interface CHUISPreferences : NSObject {
    NSUserDefaults *_defaults;
}


@property (readonly, nonatomic) BOOL debugPrefersStaticSnapshots; // ivar: _debugPrefersStaticSnapshots
@property (readonly, nonatomic) BOOL debugSnapshotViewColoring; // ivar: _debugSnapshotViewColoring
@property (readonly, nonatomic) BOOL debugViewLabels; // ivar: _debugViewLabels


+(id)sharedInstance;
-(id)init;


@end


#endif