// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11SESSIONCORE16APPEVENTOBSERVER_H
#define _TTC11SESSIONCORE16APPEVENTOBSERVER_H

@protocol LSApplicationWorkspaceObserverProtocol;

#import <Foundation/Foundation.h>


@interface _TtC11SessionCore16AppEventObserver : NSObject <LSApplicationWorkspaceObserverProtocol>

 {
    ? _removedPublisher;
    ? _addedPublisher;
    ? applicationWorkspace;
}




-(id)init;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)applicationsDidUninstall:(id)arg0 ;


@end


#endif