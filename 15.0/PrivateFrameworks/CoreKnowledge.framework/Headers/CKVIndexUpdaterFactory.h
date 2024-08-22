// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVINDEXUPDATERFACTORY_H
#define CKVINDEXUPDATERFACTORY_H


#import <Foundation/Foundation.h>


@interface CKVIndexUpdaterFactory : NSObject



-(id)ftsRecordUpdaterWithDatabase:(id)arg0 originApp:(id)arg1 itemType:(NSInteger)arg2 ;
-(id)itemRecordUpdaterWithDatabase:(id)arg0 originApp:(id)arg1 itemType:(NSInteger)arg2 startTimeMicros:(NSInteger)arg3 ;
-(id)skitRebuilderWithIndexManager:(id)arg0 localization:(id)arg1 ;
-(id)skitUpdaterWithWriteAccess:(id)arg0 localization:(id)arg1 originApp:(id)arg2 ;


@end


#endif