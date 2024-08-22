// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GCMICROGAMEPADSNAPSHOT_H
#define GCMICROGAMEPADSNAPSHOT_H

@class NSData;


#import "GCMicroGamepad.h"

@interface GCMicroGamepadSnapshot : GCMicroGamepad

@property (copy) NSData *snapshotData; // ivar: snapshotData


-(BOOL)supportsDpadTaps;
-(id)init;
-(id)initWithController:(id)arg0 snapshotData:(id)arg1 ;
-(id)initWithSnapshotData:(id)arg0 ;


@end


#endif