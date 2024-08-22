// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKCBUILDNUMBERCOMPLICATIONENTRYMODEL_H
#define NTKCBUILDNUMBERCOMPLICATIONENTRYMODEL_H

@class NSString;


#import "NTKTimelineEntryModel.h"

@interface NTKCBuildNumberComplicationEntryModel : NTKTimelineEntryModel {
    NSString *prefixString;
    NSString *buildNum;
}




+(id)modelWithBuildNum:(id)arg0 ;
-(id)entryForComplicationFamily:(NSInteger)arg0 ;


@end


#endif