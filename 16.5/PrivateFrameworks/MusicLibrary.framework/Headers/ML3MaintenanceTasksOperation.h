// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ML3MAINTENANCETASKSOPERATION_H
#define ML3MAINTENANCETASKSOPERATION_H

@class NSOperation;
@protocol OS_xpc_object;


#import "ML3MusicLibrary.h"

@interface ML3MaintenanceTasksOperation : NSOperation

@property (readonly, nonatomic) NSObject<OS_xpc_object> *activity; // ivar: _activity
@property (readonly, nonatomic) ML3MusicLibrary *library; // ivar: _library


-(id)initWithLibrary:(id)arg0 activity:(id)arg1 ;
-(void)main;


@end


#endif