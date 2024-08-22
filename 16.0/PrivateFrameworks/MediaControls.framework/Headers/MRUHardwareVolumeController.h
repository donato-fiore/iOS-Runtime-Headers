// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUHARDWAREVOLUMECONTROLLER_H
#define MRUHARDWAREVOLUMECONTROLLER_H

@class NSHashTable, NSArray;

#import <Foundation/Foundation.h>


@interface MRUHardwareVolumeController : NSObject

@property (retain, nonatomic) NSHashTable *assertions; // ivar: _assertions
@property (retain, nonatomic) NSArray *invalidators; // ivar: _invalidators


+(id)sharedInstance;
-(id)init;
-(id)requestControlsForVolumeDataSource:(id)arg0 reason:(id)arg1 ;
-(void)relinquishHardwareVolumeButtons;
-(void)unregisterAssertion:(id)arg0 ;
-(void)updateControlsForAssertion:(id)arg0 ;


@end


#endif