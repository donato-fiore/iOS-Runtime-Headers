// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIOSHOWALERTACTION_TESTINGONLY_H
#define _UIOSHOWALERTACTION_TESTINGONLY_H

@class UIOAction, NSString;



@interface _UIOShowAlertAction_TestingOnly : UIOAction

@property (copy, nonatomic) NSString *message; // ivar: _message
@property (copy, nonatomic) NSString *title; // ivar: _title


-(BOOL)isPermitted;
-(id)initWithTitle:(id)arg0 message:(id)arg1 ;
-(void)performActionFromConnection:(id)arg0 ;


@end


#endif