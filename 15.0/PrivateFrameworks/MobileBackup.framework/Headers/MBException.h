// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MBEXCEPTION_H
#define MBEXCEPTION_H

@class NSException;



@interface MBException : NSException



-(id)error;
-(id)initWithCode:(int)arg0 format:(id)arg1 ;
-(id)initWithCode:(int)arg0 format:(id)arg1 args:(char *)arg2 ;
-(int)errorCode;


@end


#endif