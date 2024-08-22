// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACDTCCUTILITIES_H
#define ACDTCCUTILITIES_H


#import <Foundation/Foundation.h>


@interface ACDTCCUtilities : NSObject



+(BOOL)TCCSupportedForAccountTypeID:(id)arg0 ;
+(BOOL)clearAllTCCStatesForAccountTypeID:(id)arg0 ;
+(BOOL)clearTCCStateForClient:(id)arg0 accountTypeID:(id)arg1 ;
+(BOOL)setTCCStateForClient:(id)arg0 accountTypeID:(id)arg1 toGranted:(BOOL)arg2 ;
+(id)allTCCStatesForAccountTypeID:(id)arg0 ;
+(int)TCCStateForClient:(id)arg0 accountTypeID:(id)arg1 ;
+(struct __CFString *)_TCCServiceForAccountTypeID:(id)arg0 ;


@end


#endif