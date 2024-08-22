// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSUBCREDENTIALPROVISIONINGTRANSITIONTABLE_H
#define PKSUBCREDENTIALPROVISIONINGTRANSITIONTABLE_H


#import <Foundation/Foundation.h>


@interface PKSubcredentialProvisioningTransitionTable : NSObject



-(BOOL)isStateFinal:(NSInteger)arg0 ;
-(BOOL)isValidStartingState:(NSInteger)arg0 ;
-(BOOL)isValidStateTransitionFrom:(NSInteger)arg0 to:(NSInteger)arg1 ;


@end


#endif