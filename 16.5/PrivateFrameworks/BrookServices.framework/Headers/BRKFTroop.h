// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRKFTROOP_H
#define BRKFTROOP_H

@protocol BRKFTroopDelegate;

#import <Foundation/Foundation.h>


@interface BRKFTroop : NSObject

@property (weak, nonatomic) NSObject<BRKFTroopDelegate> *delegate; // ivar: _delegate


+(BOOL)isEnabled;
-(void)startListeningForDemoReset;
-(void)stopListeningForDemoReset;


@end


#endif