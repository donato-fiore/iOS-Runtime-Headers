// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRINLUSYSTEMGAVEOPTIONS_H
#define SIRINLUSYSTEMGAVEOPTIONS_H

@class NSArray, NSString;
@protocol SIRINLUSystemDialogAct;

#import <Foundation/Foundation.h>


@interface SIRINLUSystemGaveOptions : NSObject <SIRINLUSystemDialogAct>



@property (retain, nonatomic) NSArray *choices; // ivar: _choices
@property (retain, nonatomic) NSString *renderedText; // ivar: renderedText


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithChoices:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif