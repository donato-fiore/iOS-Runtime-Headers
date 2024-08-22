// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAP2PROPERTYLOCK_H
#define HAP2PROPERTYLOCK_H



#import "HAP2Lock.h"

@interface HAP2PropertyLock : HAP2Lock



+(id)lockWithName:(id)arg0 ;
-(void)performBlock:(id)arg0 ;
-(void)performReadingBlock:(id)arg0 ;
-(void)performWritingBlock:(id)arg0 ;


@end


#endif