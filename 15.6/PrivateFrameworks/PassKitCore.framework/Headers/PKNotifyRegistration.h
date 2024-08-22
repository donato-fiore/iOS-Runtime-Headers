// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKNOTIFYREGISTRATION_H
#define PKNOTIFYREGISTRATION_H

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PKNotifyRegistration : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    os_unfair_lock_s _lock;
    int _token;
    NSMutableArray *_subregistrations;
    BOOL _invalidated;
}


@property (readonly, nonatomic) NSString *name; // ivar: _name


-(BOOL)hasSubregistrations;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(id)subregisterWithHandler:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)removeInvalidatedSubregistration:(id)arg0 ;


@end


#endif