// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDWHITETAILTOCORALDOWNGRADEHELPER_H
#define IMDWHITETAILTOCORALDOWNGRADEHELPER_H



#import "IMDDatabaseDowngradeHelper.h"

@interface IMDWhitetailToCoralDowngradeHelper : IMDDatabaseDowngradeHelper



+(id)arrayOfCreateIndexesSQL;
+(id)arrayOfCreateTablesSQL;
+(id)arrayOfCreateTriggersSQL;
+(id)arrayOfTableNames;
-(id)initWithPath:(id)arg0 ;


@end


#endif