// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PSCNAUTOCOMPLETEFEEDBACKVENDEDSUGGESTIONS_H
#define _PSCNAUTOCOMPLETEFEEDBACKVENDEDSUGGESTIONS_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _PSCNAutocompleteFeedbackVendedSuggestions : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *suggestions; // ivar: _suggestions


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSuggestions:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif