// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSYSTEMSURFACEWORKFLOWSTATUSREGISTRY_H
#define WFSYSTEMSURFACEWORKFLOWSTATUSREGISTRY_H

@class NSUserDefaults;

#import <Foundation/Foundation.h>


@interface WFSystemSurfaceWorkflowStatusRegistry : NSObject

@property (readonly, nonatomic) NSUserDefaults *shortcutsUserDefaults; // ivar: _shortcutsUserDefaults


-(BOOL)setStatus:(NSUInteger)arg0 forSystemSurface:(NSUInteger)arg1 ;
-(BOOL)setStatusForServicesWorkflows:(NSUInteger)arg0 ;
-(BOOL)setStatusForShareSheetWorkflows:(NSUInteger)arg0 ;
-(NSUInteger)statusForServicesWorkflows;
-(NSUInteger)statusForShareSheetWorkflows;
-(NSUInteger)statusForSystemSurface:(NSUInteger)arg0 ;
-(id)init;


@end


#endif