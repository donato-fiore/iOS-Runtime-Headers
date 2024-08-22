// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCMANAGEDAPPMANAGERREADER_H
#define MCMANAGEDAPPMANAGERREADER_H


#import <Foundation/Foundation.h>


@interface MCManagedAppManagerReader : NSObject



+(id)attributesByAppID;
+(id)managedAppIDsWithFlags:(int)arg0 ;
+(int)_MCMAMManagementFlagsToMDMManagedAppFlag:(int)arg0 ;


@end


#endif