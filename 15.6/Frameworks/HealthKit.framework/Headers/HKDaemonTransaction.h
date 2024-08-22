// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKDAEMONTRANSACTION_H
#define HKDAEMONTRANSACTION_H

@class NSString;
@protocol OS_os_transaction;

#import <Foundation/Foundation.h>


@interface HKDaemonTransaction : NSObject {
    NSObject<OS_os_transaction> *_transaction;
}


@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


+(id)transactionWithName:(id)arg0 ;
+(id)transactionWithOwner:(id)arg0 ;
+(id)transactionWithOwner:(id)arg0 activityName:(id)arg1 ;
-(id)_initWithName:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;


@end


#endif