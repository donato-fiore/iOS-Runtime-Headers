// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTURLDERESACTION_H
#define MTURLDERESACTION_H

@class NSDictionary, NSString;


#import "MTTreatmentAction.h"

@interface MTURLDeresAction : MTTreatmentAction

@property (retain, nonatomic) NSDictionary *allowedParams; // ivar: _allowedParams
@property (retain, nonatomic) NSString *scope; // ivar: _scope


-(id)allowedQueryItemsFromItems:(id)arg0 ;
-(id)initWithField:(id)arg0 configDictionary:(id)arg1 ;
-(id)performAction:(id)arg0 context:(id)arg1 ;


@end


#endif