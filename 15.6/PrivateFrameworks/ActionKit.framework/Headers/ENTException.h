// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENTEXCEPTION_H
#define ENTEXCEPTION_H

@class NSException;



@interface ENTException : NSException



+(id)exceptionWithName:(id)arg0 ;
+(id)exceptionWithName:(id)arg0 reason:(id)arg1 ;
+(id)exceptionWithName:(id)arg0 reason:(id)arg1 error:(id)arg2 ;
-(id)description;


@end


#endif