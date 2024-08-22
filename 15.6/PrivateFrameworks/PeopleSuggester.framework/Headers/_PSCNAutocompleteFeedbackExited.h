// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PSCNAUTOCOMPLETEFEEDBACKEXITED_H
#define _PSCNAUTOCOMPLETEFEEDBACKEXITED_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _PSCNAutocompleteFeedbackExited : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger exitStatus; // ivar: _exitStatus


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExitStatus:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif