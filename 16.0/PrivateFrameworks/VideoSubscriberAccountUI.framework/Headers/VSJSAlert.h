// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSJSALERT_H
#define VSJSALERT_H

@class IKJSObject, NSArray, NSString;
@protocol VSJSAlert;



@interface VSJSAlert : IKJSObject <VSJSAlert>



@property (copy, nonatomic) NSArray *actions; // ivar: _actions
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)init;


@end


#endif