// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GDVIEWDATABASEINSTANCES_H
#define GDVIEWDATABASEINSTANCES_H

@class NSURL, _PASLock;

#import <Foundation/Foundation.h>


@interface GDViewDatabaseInstances : NSObject {
    NSURL *_baseURL;
    _PASLock *_lock;
}




-(id)databaseForURL:(id)arg0 error:(*id)arg1 ;
-(id)init;


@end


#endif