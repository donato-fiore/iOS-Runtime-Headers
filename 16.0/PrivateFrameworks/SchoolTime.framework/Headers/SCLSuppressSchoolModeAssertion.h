// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCLSUPPRESSSCHOOLMODEASSERTION_H
#define SCLSUPPRESSSCHOOLMODEASSERTION_H

@class NSUUID, NSXPCConnection, NSString;

#import <Foundation/Foundation.h>


@interface SCLSuppressSchoolModeAssertion : NSObject {
    os_unfair_lock_s _lock;
    NSUUID *_UUID;
    NSXPCConnection *_connection;
    NSUInteger _state;
}


@property (readonly, copy, nonatomic) NSString *explanation; // ivar: _explanation
@property (readonly, nonatomic, getter=isValid) BOOL valid;


-(BOOL)acquireWithError:(*id)arg0 ;
-(id)description;
-(id)initWithExplanation:(id)arg0 ;
-(void)acquireWithInvalidationHandler:(id)arg0 ;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)invalidate;


@end


#endif