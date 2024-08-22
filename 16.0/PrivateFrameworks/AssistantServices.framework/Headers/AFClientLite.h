// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFCLIENTLITE_H
#define AFCLIENTLITE_H


#import <Foundation/Foundation.h>

#import "AFCallSiteInfo.h"

@interface AFClientLite : NSObject {
    AFCallSiteInfo *_initiationCallSiteInfo;
}




-(id)init;
// -(void)_handleCommand:(id)arg0 afterCurrentRequest:(BOOL)arg1 isOneWay:(BOOL)arg2 commandHandler:(id)arg3 completion:(unk)arg4  ;
-(void)dealloc;
// -(void)handleCommand:(id)arg0 afterCurrentRequest:(BOOL)arg1 commandHandler:(id)arg2 completion:(unk)arg3  ;
// -(void)handleCommand:(id)arg0 commandHandler:(id)arg1 completion:(unk)arg2  ;
// -(void)handleOneWayCommand:(id)arg0 commandHandler:(id)arg1 completion:(unk)arg2  ;


@end


#endif