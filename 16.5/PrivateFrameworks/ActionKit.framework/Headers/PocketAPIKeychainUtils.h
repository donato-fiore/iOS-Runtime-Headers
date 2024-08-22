// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POCKETAPIKEYCHAINUTILS_H
#define POCKETAPIKEYCHAINUTILS_H


#import <Foundation/Foundation.h>


@interface PocketAPIKeychainUtils : NSObject



+(BOOL)deleteItemForUsername:(id)arg0 andServiceName:(id)arg1 error:(*id)arg2 ;
+(BOOL)storeUsername:(id)arg0 andPassword:(id)arg1 forServiceName:(id)arg2 updateExisting:(BOOL)arg3 error:(*id)arg4 ;
+(id)getPasswordForUsername:(id)arg0 andServiceName:(id)arg1 error:(*id)arg2 ;


@end


#endif