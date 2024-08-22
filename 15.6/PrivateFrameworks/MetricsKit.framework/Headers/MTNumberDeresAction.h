// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTNUMBERDERESACTION_H
#define MTNUMBERDERESACTION_H

@class NSArray;


#import "MTTreatmentAction.h"

@interface MTNumberDeresAction : MTTreatmentAction

@property (retain, nonatomic) NSArray *buckets; // ivar: _buckets
@property (nonatomic) CGFloat precision; // ivar: _precision


-(id)initWithField:(id)arg0 configDictionary:(id)arg1 ;
-(id)performAction:(id)arg0 context:(id)arg1 ;


@end


#endif