// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKQUESTIONCHOICE_H
#define FBKQUESTIONCHOICE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FBKQuestionChoice : NSObject <NSSecureCoding>



@property BOOL canSelect; // ivar: _canSelect
@property (readonly, getter=isPrompt) BOOL prompt;
@property (readonly) NSString *title; // ivar: _title
@property (readonly) id *value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(id)choiceFromArray:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 value:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif