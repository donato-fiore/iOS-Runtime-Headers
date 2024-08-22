// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RPAPPSIGNINSERVICE_H
#define RPAPPSIGNINSERVICE_H

@class SFService, NSString, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RPAppSignInService : NSObject {
    BOOL _activateCalled;
    SFService *_bleAdvertiser;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
}


@property (copy, nonatomic) NSString *appBundleID; // ivar: _appBundleID
@property (copy, nonatomic) NSString *appName; // ivar: _appName
@property (copy, nonatomic) NSArray *associatedDomains; // ivar: _associatedDomains
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic) unsigned int flags; // ivar: _flags


-(id)description;
-(id)init;
-(void)_activate;
-(void)_invalidate;
-(void)_invalidated;
-(void)activate;
-(void)invalidate;


@end


#endif