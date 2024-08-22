// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMFOSTRANSACTION_H
#define HMFOSTRANSACTION_H

@protocol OS_os_transaction;


#import "HMFObject.h"

@interface HMFOSTransaction : HMFObject

@property (readonly, nonatomic) CGFloat creationTime; // ivar: _creationTime
@property (readonly, nonatomic) NSObject<OS_os_transaction> *transaction; // ivar: _transaction


-(id)init;
-(id)initWithName:(id)arg0 ;
-(void)dealloc;


@end


#endif