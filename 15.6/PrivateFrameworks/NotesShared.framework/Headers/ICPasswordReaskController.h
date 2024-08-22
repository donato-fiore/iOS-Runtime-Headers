// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICPASSWORDREASKCONTROLLER_H
#define ICPASSWORDREASKCONTROLLER_H


#import <Foundation/Foundation.h>


@interface ICPasswordReaskController : NSObject



+(id)sharedController;
-(BOOL)isEnrolledInReaskForAccount:(id)arg0 ;
-(BOOL)shouldReaskForAccount:(id)arg0 ;
-(id)keyForEnrolledInReask:(id)arg0 ;
-(id)keyForLastReaskDate:(id)arg0 ;
-(id)lastReaskDateForAccount:(id)arg0 ;
-(void)enrollInReaskForAccount:(id)arg0 ;
-(void)reaskPasswordForAccount:(id)arg0 ;
-(void)reaskPasswordForAccountIfNecessary:(id)arg0 ;
-(void)setIsEnrolledInReask:(BOOL)arg0 forAccount:(id)arg1 ;
-(void)setLastReaskDate:(id)arg0 forAccount:(id)arg1 ;


@end


#endif