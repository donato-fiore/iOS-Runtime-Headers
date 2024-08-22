// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRINLUSYSTEMPROMPTED_H
#define SIRINLUSYSTEMPROMPTED_H

@class NSString;
@protocol SIRINLUSystemDialogAct;

#import <Foundation/Foundation.h>

#import "USOSerializedGraph.h"

@interface SIRINLUSystemPrompted : NSObject <SIRINLUSystemDialogAct>



@property (retain, nonatomic) USOSerializedGraph *reference; // ivar: _reference
@property (retain, nonatomic) NSString *renderedText; // ivar: renderedText


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithReference:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif