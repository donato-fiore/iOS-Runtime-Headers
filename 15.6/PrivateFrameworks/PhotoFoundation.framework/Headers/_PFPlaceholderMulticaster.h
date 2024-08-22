// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PFPLACEHOLDERMULTICASTER_H
#define _PFPLACEHOLDERMULTICASTER_H



#import "PFMulticaster.h"

@interface _PFPlaceholderMulticaster : PFMulticaster



+(BOOL)resolveInstanceMethod:(SEL)arg0 ;
+(BOOL)tryConvertToConcreteMulticaster:(id)arg0 ;
+(Class)placeholderSubclassOfClass:(Class)arg0 named:(id)arg1 ;
+(void)convertToConcreteMulticaster:(id)arg0 forReceiver:(id)arg1 ;
-(void)__ignore;
-(void)addReceiver:(id)arg0 ;
-(void)addWeakReceiver:(id)arg0 ;


@end


#endif