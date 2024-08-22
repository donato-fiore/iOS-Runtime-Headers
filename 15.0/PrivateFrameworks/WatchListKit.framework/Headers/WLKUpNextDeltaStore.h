// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLKUPNEXTDELTASTORE_H
#define WLKUPNEXTDELTASTORE_H


#import <Foundation/Foundation.h>

#import "WLKSharedFileStorage.h"

@interface WLKUpNextDeltaStore : NSObject {
    WLKSharedFileStorage *_fileStorage;
}




+(id)sharedInstance;
-(id)init;
-(void)delete:(id)arg0 ;
-(void)merge:(id)arg0 completion:(id)arg1 ;
-(void)read:(id)arg0 ;
-(void)write:(id)arg0 completion:(id)arg1 ;


@end


#endif