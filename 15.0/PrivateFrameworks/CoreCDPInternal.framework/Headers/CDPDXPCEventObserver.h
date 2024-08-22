// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDPDXPCEVENTOBSERVER_H
#define CDPDXPCEVENTOBSERVER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface CDPDXPCEventObserver : NSObject {
    NSMutableArray *_eventListeners;
}




+(id)sharedObserver;
-(void)_setupDarwinListener;
-(void)_setupDistributedListener;
-(void)registerListener:(id)arg0 ;
-(void)start;


@end


#endif