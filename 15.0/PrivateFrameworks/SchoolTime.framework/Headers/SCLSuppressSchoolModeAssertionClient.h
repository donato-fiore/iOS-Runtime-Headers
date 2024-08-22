// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCLSUPPRESSSCHOOLMODEASSERTIONCLIENT_H
#define SCLSUPPRESSSCHOOLMODEASSERTIONCLIENT_H

@class NSXPCConnection, NSString;
@protocol SCLSuppressSchoolModeAssertionXPCServer, SCLSuppressSchoolModeAssertionClientDelegate;

#import <Foundation/Foundation.h>


@interface SCLSuppressSchoolModeAssertionClient : NSObject <SCLSuppressSchoolModeAssertionXPCServer>



@property (nonatomic, getter=isAcquired) BOOL acquired; // ivar: _acquired
@property (readonly, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SCLSuppressSchoolModeAssertionClientDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEntitled) BOOL entitled; // ivar: _entitled
@property (readonly, copy, nonatomic) NSString *explanation; // ivar: _explanation
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithConnection:(id)arg0 ;
-(void)acquireWithExplanation:(id)arg0 UUID:(id)arg1 completion:(id)arg2 ;


@end


#endif