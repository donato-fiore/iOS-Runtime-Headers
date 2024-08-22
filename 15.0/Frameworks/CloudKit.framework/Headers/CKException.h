// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKEXCEPTION_H
#define CKEXCEPTION_H

@class NSException;



@interface CKException : NSException

@property (readonly, nonatomic) int errorCode;


-(id)error;
-(id)initWithCode:(int)arg0 format:(id)arg1 ;
-(id)initWithCode:(int)arg0 format:(id)arg1 args:(char *)arg2 ;
-(id)initWithName:(id)arg0 format:(id)arg1 ;
-(id)initWithName:(id)arg0 format:(id)arg1 args:(char *)arg2 ;


@end


#endif