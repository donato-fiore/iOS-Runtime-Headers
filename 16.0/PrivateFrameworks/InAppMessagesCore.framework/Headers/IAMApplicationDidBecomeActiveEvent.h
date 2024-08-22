// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IAMAPPLICATIONDIDBECOMEACTIVEEVENT_H
#define IAMAPPLICATIONDIDBECOMEACTIVEEVENT_H



#import "IAMCountableEvent.h"

@interface IAMApplicationDidBecomeActiveEvent : IAMCountableEvent



-(NSInteger)type;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 type:(NSInteger)arg1 ;
-(id)name;


@end


#endif