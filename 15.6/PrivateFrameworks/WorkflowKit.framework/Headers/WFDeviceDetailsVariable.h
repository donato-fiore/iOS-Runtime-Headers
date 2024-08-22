// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDEVICEDETAILSVARIABLE_H
#define WFDEVICEDETAILSVARIABLE_H



#import "WFVariable.h"

@interface WFDeviceDetailsVariable : WFVariable



-(BOOL)isAvailable;
-(id)iconSymbolName;
-(id)initWithAggrandizements:(id)arg0 ;
-(id)name;
-(id)possibleContentClassesWithContext:(id)arg0 ;
-(void)retrieveContentCollectionWithVariableSource:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif