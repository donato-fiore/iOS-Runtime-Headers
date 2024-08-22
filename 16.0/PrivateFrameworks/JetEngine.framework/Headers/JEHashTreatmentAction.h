// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JEHASHTREATMENTACTION_H
#define JEHASHTREATMENTACTION_H

@class NSDictionary, NSString;


#import "JETreatmentAction.h"

@interface JEHashTreatmentAction : JETreatmentAction

@property (retain, nonatomic) NSDictionary *configuration; // ivar: _configuration
@property (retain, nonatomic) NSString *namespace; // ivar: _namespace
@property (retain, nonatomic) NSString *topic; // ivar: _topic


-(id)hashOf:(id)arg0 userId:(id)arg1 ;
-(id)initWithField:(id)arg0 configuration:(id)arg1 ;
-(id)initWithField:(id)arg0 configuration:(id)arg1 topic:(id)arg2 ;
-(id)performAction:(id)arg0 context:(id)arg1 ;


@end


#endif