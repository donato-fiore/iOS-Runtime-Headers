// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKAPPLICATIONWORKSPACEPROXY_H
#define PKAPPLICATIONWORKSPACEPROXY_H

@class NSString, LSApplicationWorkspace;
@protocol PKApplicationWorkspaceProxy;

#import <Foundation/Foundation.h>


@interface PKApplicationWorkspaceProxy : NSObject <PKApplicationWorkspaceProxy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) LSApplicationWorkspace *lsObject; // ivar: _lsObject
@property (readonly) Class superclass;


+(id)defaultWorkspace;
-(BOOL)registerPlugin:(id)arg0 ;
-(BOOL)unregisterPlugin:(id)arg0 ;
-(id)init;
-(id)installedPlugins;
-(id)pluginsMatchingQuery:(id)arg0 applyFilter:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif