// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UVEXCEPTIONERROR_H
#define UVEXCEPTIONERROR_H

@class NSError, NSException;



@interface UVExceptionError : NSError

@property (readonly, nonatomic) NSException *exception; // ivar: _exception


-(id)initWithDomain:(id)arg0 code:(NSInteger)arg1 userInfo:(id)arg2 ;
-(id)initWithException:(id)arg0 ;


@end


#endif