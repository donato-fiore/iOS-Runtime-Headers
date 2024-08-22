// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSBLUETOOTHWIRELESSSPLITTERINFO_H
#define CSBLUETOOTHWIRELESSSPLITTERINFO_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface CSBluetoothWirelessSplitterInfo : NSObject {
    NSMutableArray *_splitterDeviceList;
}


@property (readonly, nonatomic) BOOL shouldDisableSpeakerVerificationInSplitterMode;
@property (nonatomic) BOOL splitterEnabled; // ivar: _splitterEnabled


-(BOOL)_hasDeviceTemporaryPairedNotInContacts;
-(NSUInteger)splitterState;
-(id)description;
-(id)init;
-(id)splitterDeviceList;
-(void)addDeviceIntoSplitterDeviceList:(id)arg0 ;


@end


#endif