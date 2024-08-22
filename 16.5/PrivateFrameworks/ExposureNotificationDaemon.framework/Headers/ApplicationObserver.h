// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APPLICATIONOBSERVER_H
#define APPLICATIONOBSERVER_H

@class NSString;
@protocol LSApplicationWorkspaceObserverProtocol, ApplicationObserver;

#import <Foundation/Foundation.h>


@interface ApplicationObserver : NSObject <LSApplicationWorkspaceObserverProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ApplicationObserver> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)applicationsDidUninstall:(id)arg0 ;
-(void)dealloc;


@end


#endif