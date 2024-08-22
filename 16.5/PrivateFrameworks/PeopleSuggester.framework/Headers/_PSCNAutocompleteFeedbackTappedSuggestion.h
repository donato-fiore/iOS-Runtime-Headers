// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PSCNAUTOCOMPLETEFEEDBACKTAPPEDSUGGESTION_H
#define _PSCNAUTOCOMPLETEFEEDBACKTAPPEDSUGGESTION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_PSSuggestion.h"

@interface _PSCNAutocompleteFeedbackTappedSuggestion : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) _PSSuggestion *suggestion; // ivar: _suggestion


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSuggestion:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif