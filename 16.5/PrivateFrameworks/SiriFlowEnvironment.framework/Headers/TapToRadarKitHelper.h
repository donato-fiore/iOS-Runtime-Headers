// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TAPTORADARKITHELPER_H
#define TAPTORADARKITHELPER_H


#import <Foundation/Foundation.h>


@interface TapToRadarKitHelper : NSObject



+(BOOL)createProblem:(id)arg0 componentVersion:(id)arg1 componentID:(id)arg2 title:(id)arg3 description:(id)arg4 attachmentURLs:(id)arg5 extensionIDs:(id)arg6 deviceIDs:(id)arg7 displayReason:(id)arg8 ;
+(id)createDraft:(id)arg0 description:(id)arg1 attachmentURLs:(id)arg2 extensionIDs:(id)arg3 deviceIDs:(id)arg4 component:(id)arg5 ;
+(id)getLogger;


@end


#endif