// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PSCNAUTOCOMPLETEFEEDBACKENTERED_H
#define _PSCNAUTOCOMPLETEFEEDBACKENTERED_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _PSCNAutocompleteFeedbackEntered : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger enterStatus; // ivar: _enterStatus


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEnterStatus:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif