// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMCPROCESSASSERTION_H
#define DMCPROCESSASSERTION_H

@class NSString;
@protocol OS_os_transaction;

#import <Foundation/Foundation.h>


@interface DMCProcessAssertion : NSObject {
    NSObject<OS_os_transaction> *_transaction;
}


@property (readonly, nonatomic) NSString *reason; // ivar: _reason


-(id)initWithReason:(id)arg0 ;
-(void)_createAssertion;
-(void)_releaseAssertion;
-(void)dealloc;


@end


#endif