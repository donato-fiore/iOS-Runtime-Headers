// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUCOREDIAGPOINT_H
#define SUCOREDIAGPOINT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SUCoreDiagPoint : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *activity; // ivar: _activity
@property (nonatomic) NSInteger checkedCode; // ivar: _checkedCode
@property (retain, nonatomic) NSString *checkedDomain; // ivar: _checkedDomain
@property (nonatomic) NSInteger checkedIndications; // ivar: _checkedIndications
@property (nonatomic) NSInteger checkedLayer; // ivar: _checkedLayer
@property (nonatomic) NSInteger code; // ivar: _code
@property (retain, nonatomic) NSString *errorDesc; // ivar: _errorDesc
@property (retain, nonatomic) NSString *location; // ivar: _location
@property (retain, nonatomic) NSString *next; // ivar: _next
@property (retain, nonatomic) NSString *param; // ivar: _param
@property (retain, nonatomic) NSString *previous; // ivar: _previous
@property (retain, nonatomic) NSString *reason; // ivar: _reason
@property (nonatomic) NSInteger trackType; // ivar: _trackType


+(BOOL)supportsSecureCoding;
-(id)_descriptionStandard;
-(id)_descriptionStateEvent;
-(id)_initFullySpecified:(NSInteger)arg0 fromLocation:(id)arg1 forReason:(id)arg2 withCode:(NSInteger)arg3 withError:(id)arg4 previous:(id)arg5 next:(id)arg6 activity:(id)arg7 param:(id)arg8 ;
-(id)_summaryStandard;
-(id)_summaryStateEvent;
-(id)description;
-(id)initOfType:(NSInteger)arg0 fromLocation:(id)arg1 forReason:(id)arg2 withCode:(NSInteger)arg3 withError:(id)arg4 ;
-(id)initStateEventForFSM:(id)arg0 previousState:(id)arg1 fsmEvent:(id)arg2 nextState:(id)arg3 fsmAction:(id)arg4 eventInfo:(id)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(id)summary;
-(id)typeName;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif