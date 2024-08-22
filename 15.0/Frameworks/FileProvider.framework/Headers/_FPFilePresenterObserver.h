// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _FPFILEPRESENTEROBSERVER_H
#define _FPFILEPRESENTEROBSERVER_H

@protocol FPFilePresenterObserver;

#import <Foundation/Foundation.h>

#import "NSFileProviderManager.h"

@interface _FPFilePresenterObserver : NSObject <FPFilePresenterObserver>



@property (weak) NSFileProviderManager *parentConnection; // ivar: _parentConnection


-(void)observePresentedFilesDidChange:(id)arg0 ;


@end


#endif