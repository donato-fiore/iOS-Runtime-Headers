// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCURRENTDATEVARIABLE_H
#define WFCURRENTDATEVARIABLE_H



#import "WFVariable.h"

@interface WFCurrentDateVariable : WFVariable



-(BOOL)isAvailable;
-(id)iconImage;
-(id)initWithAggrandizements:(id)arg0 ;
-(id)name;
-(id)possibleContentClassesWithContext:(id)arg0 ;
-(void)retrieveContentCollectionWithVariableSource:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif