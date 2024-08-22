// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PSCNAUTOCOMPLETEFEEDBACKTYPEDHANDLE_H
#define _PSCNAUTOCOMPLETEFEEDBACKTYPEDHANDLE_H

@class CNContact;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _PSCNAutocompleteFeedbackTypedHandle : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, nonatomic) BOOL viaContactPicker; // ivar: _viaContactPicker


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContact:(id)arg0 viaContactPicker:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif