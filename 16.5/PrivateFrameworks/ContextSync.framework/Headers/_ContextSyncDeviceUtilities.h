// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CONTEXTSYNCDEVICEUTILITIES_H
#define _CONTEXTSYNCDEVICEUTILITIES_H


#import <Foundation/Foundation.h>


@interface _ContextSyncDeviceUtilities : NSObject



+(BOOL)isSupportEnabledForBMDSL:(id)arg0 withError:(*id)arg1 ;
+(id)currentBootSessionUUID;
+(void)updateDescriptionForError:(*id)arg0 withErrorCode:(NSInteger)arg1 ;


@end


#endif