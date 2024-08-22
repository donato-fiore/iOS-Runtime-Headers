// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSHISTORYTAGDATABASECONTROLLER_H
#define WBSHISTORYTAGDATABASECONTROLLER_H

@class WBSSQLiteDatabase;

#import <Foundation/Foundation.h>


@interface WBSHistoryTagDatabaseController : NSObject {
    WBSSQLiteDatabase *_database;
}




-(BOOL)assignHistoryItemWithID:(NSInteger)arg0 toTopicTagsWithIDs:(id)arg1 error:(*id)arg2 ;
-(BOOL)clearAllTagsWithError:(*id)arg0 ;
-(BOOL)clearTagsFromStartDate:(id)arg0 endDate:(id)arg1 error:(*id)arg2 ;
-(BOOL)renameTagWithID:(NSInteger)arg0 toTitle:(id)arg1 error:(*id)arg2 ;
-(id)createTagsForIdentifiers:(id)arg0 withTitles:(id)arg1 type:(NSUInteger)arg2 level:(NSInteger)arg3 error:(*id)arg4 ;
-(id)initWithDatabase:(id)arg0 ;


@end


#endif