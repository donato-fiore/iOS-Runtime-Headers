// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSCOREDATAEXCEPTION_H
#define _NSCOREDATAEXCEPTION_H

@class NSException, NSString;



@interface _NSCoreDataException : NSException {
    NSInteger _code;
    NSString *_domain;
}




-(id)errorObjectWithUserInfo:(id)arg0 ;
-(id)initWithName:(id)arg0 reason:(id)arg1 userInfo:(id)arg2 ;
-(void)dealloc;


@end


#endif