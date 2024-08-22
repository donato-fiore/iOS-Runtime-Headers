// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKMONOGRAMCOMPLICATION_H
#define NTKMONOGRAMCOMPLICATION_H



#import "NTKComplication.h"

@interface NTKMonogramComplication : NTKComplication



-(BOOL)appearsInDailySnapshotForFamily:(NSInteger)arg0 ;
-(BOOL)snapshotContext:(id)arg0 isStaleRelativeToContext:(id)arg1 ;
-(id)ntk_sectionIdentifier;


@end


#endif