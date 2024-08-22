// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCEXTENDEDGAMEPADSNAPSHOT_H
#define GCEXTENDEDGAMEPADSNAPSHOT_H

@class NSData;


#import "GCExtendedGamepad.h"

@interface GCExtendedGamepadSnapshot : GCExtendedGamepad

@property (copy) NSData *snapshotData; // ivar: snapshotData


-(id)init;
-(id)initWithController:(id)arg0 snapshotData:(id)arg1 ;
-(id)initWithSnapshotData:(id)arg0 ;


@end


#endif