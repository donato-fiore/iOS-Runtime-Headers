// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBBOOKMARKSDATABASEHEALTHINFORMATION_H
#define WBBOOKMARKSDATABASEHEALTHINFORMATION_H


#import <Foundation/Foundation.h>


@interface WBBookmarksDatabaseHealthInformation : NSObject

@property (readonly, nonatomic) NSUInteger allDuplicateBookmarksCount; // ivar: _allDuplicateBookmarksCount
@property (readonly, nonatomic) NSUInteger topLevelDuplicateBookmarksCount; // ivar: _topLevelDuplicateBookmarksCount


-(id)initWithTopLevelDuplicateBookmarksCount:(NSUInteger)arg0 allDuplicateBookmarksCount:(NSUInteger)arg1 ;


@end


#endif