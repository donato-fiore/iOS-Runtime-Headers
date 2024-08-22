// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCGAMEPADSNAPSHOT_H
#define GCGAMEPADSNAPSHOT_H

@class NSData;


#import "GCGamepad.h"

@interface GCGamepadSnapshot : GCGamepad

@property (copy) NSData *snapshotData; // ivar: snapshotData


-(id)init;
-(id)initWithController:(id)arg0 snapshotData:(id)arg1 ;
-(id)initWithSnapshotData:(id)arg0 ;


@end


#endif