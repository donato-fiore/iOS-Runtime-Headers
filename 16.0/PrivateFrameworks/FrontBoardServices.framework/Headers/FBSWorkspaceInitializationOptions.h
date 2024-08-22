// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBSWORKSPACEINITIALIZATIONOPTIONS_H
#define FBSWORKSPACEINITIALIZATIONOPTIONS_H

@protocol FBSWorkspaceDelegate;

#import <Foundation/Foundation.h>

#import "FBSSerialQueue.h"

@interface FBSWorkspaceInitializationOptions : NSObject

@property (nonatomic, setter=_setStartsInactive:) BOOL _startsInactive; // ivar: _startsInactive
@property (retain, nonatomic) FBSSerialQueue *callOutQueue; // ivar: _callOutQueue
@property (readonly, nonatomic) NSObject<FBSWorkspaceDelegate> *delegate; // ivar: _delegate


+(id)optionsWithDelegate:(id)arg0 ;
-(id)_initWithDelegate:(id)arg0 ;
-(id)init;


@end


#endif