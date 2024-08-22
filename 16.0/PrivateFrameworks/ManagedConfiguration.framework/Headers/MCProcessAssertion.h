// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCPROCESSASSERTION_H
#define MCPROCESSASSERTION_H

@class NSString;
@protocol OS_os_transaction;

#import <Foundation/Foundation.h>


@interface MCProcessAssertion : NSObject {
    NSObject<OS_os_transaction> *_transaction;
}


@property (readonly, nonatomic) NSString *reason; // ivar: _reason


-(id)initWithReason:(id)arg0 ;
-(void)_createAssertion;
-(void)_releaseAssertion;
-(void)dealloc;


@end


#endif