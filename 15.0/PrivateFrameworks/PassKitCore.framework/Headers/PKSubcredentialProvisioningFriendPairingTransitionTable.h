// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSUBCREDENTIALPROVISIONINGFRIENDPAIRINGTRANSITIONTABLE_H
#define PKSUBCREDENTIALPROVISIONINGFRIENDPAIRINGTRANSITIONTABLE_H



#import "PKSubcredentialProvisioningTransitionTable.h"

@interface PKSubcredentialProvisioningFriendPairingTransitionTable : PKSubcredentialProvisioningTransitionTable



-(BOOL)isValidStartingState:(NSInteger)arg0 ;
-(BOOL)isValidStateTransitionFrom:(NSInteger)arg0 to:(NSInteger)arg1 ;


@end


#endif