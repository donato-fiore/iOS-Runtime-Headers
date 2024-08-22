// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGSUGGESTIONSWORKGROUPMANAGERGUARDEDDATA_H
#define SGSUGGESTIONSWORKGROUPMANAGERGUARDEDDATA_H

@class NSMapTable, NSMutableArray;

#import <Foundation/Foundation.h>


@interface SGSuggestionsWorkGroupManagerGuardedData : NSObject {
    NSMapTable *_groupLookup;
    NSMutableArray *_uniqueIds;
}




-(BOOL)isProcessedUniqueId:(id)arg0 ;
-(id)createGroupForUniqueId:(id)arg0 ;
-(id)groupForUniqueId:(id)arg0 ;
-(id)init;
-(void)addToProcessedIds:(id)arg0 ;
-(void)enterGroupForUniqueId:(id)arg0 ;
-(void)leaveGroupForUniqueId:(id)arg0 ;
-(void)removeGroupFromProcessedIds:(id)arg0 ;


@end


#endif