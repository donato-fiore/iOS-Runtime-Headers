// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASETTINGGETCELLULARDATA_H
#define SASETTINGGETCELLULARDATA_H



#import "SASettingGetBool.h"

@interface SASettingGetCellularData : SASettingGetBool



+(id)getCellularData;
+(id)getCellularDataWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif