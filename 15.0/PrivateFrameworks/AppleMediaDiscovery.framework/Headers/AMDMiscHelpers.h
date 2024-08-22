// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMDMISCHELPERS_H
#define AMDMISCHELPERS_H


#import <Foundation/Foundation.h>


@interface AMDMiscHelpers : NSObject



+(BOOL)createOrMoveSymbolicLinkAtURL:(id)arg0 toDestinationURL:(id)arg1 ;
+(BOOL)ensureDir:(id)arg0 removeIfExists:(BOOL)arg1 ;
+(CGFloat)machGetClockSecs;
+(void)printInput:(id)arg0 withRawData:(*void)arg1 withType:(NSInteger)arg2 andSize:(int)arg3 ;
+(void)showAlert:(id)arg0 ;
+(void)validateDSID:(id)arg0 error:(*id)arg1 ;


@end


#endif