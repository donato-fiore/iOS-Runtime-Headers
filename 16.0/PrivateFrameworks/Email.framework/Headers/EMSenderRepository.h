// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMSENDERREPOSITORY_H
#define EMSENDERREPOSITORY_H



#import "EMRepository.h"

@interface EMSenderRepository : EMRepository



+(id)remoteInterface;
-(id)performQuery:(id)arg0 withObserver:(id)arg1 ;
-(id)simpleAddressesForRelevantSenders:(*id)arg0 ;
-(void)refreshQueryWithObserver:(id)arg0 ;


@end


#endif