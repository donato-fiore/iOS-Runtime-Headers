// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMMUTABLEUSERLISTENINGHISTORYUPDATECONTROL_H
#define HMMUTABLEUSERLISTENINGHISTORYUPDATECONTROL_H

@class NSArray;


#import "HMUserListeningHistoryUpdateControl.h"

@interface HMMutableUserListeningHistoryUpdateControl : HMUserListeningHistoryUpdateControl

@property (copy) NSArray *accessories;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAccessories:(id)arg0 ;
-(void)addAccessory:(id)arg0 ;
-(void)removeAccessory:(id)arg0 ;


@end


#endif