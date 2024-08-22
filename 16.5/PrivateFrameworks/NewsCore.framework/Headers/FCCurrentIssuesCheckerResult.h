// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCURRENTISSUESCHECKERRESULT_H
#define FCCURRENTISSUESCHECKERRESULT_H

@class NSArray, NSError;

#import <Foundation/Foundation.h>


@interface FCCurrentIssuesCheckerResult : NSObject

@property (retain, nonatomic) NSArray *autoFavoriteIssues; // ivar: _autoFavoriteIssues
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSArray *followedIssues; // ivar: _followedIssues
@property (retain, nonatomic) NSArray *seenIssues; // ivar: _seenIssues
@property (retain, nonatomic) NSArray *unbadgedIssues; // ivar: _unbadgedIssues
@property (retain, nonatomic) NSArray *unreadFollowedIssues; // ivar: _unreadFollowedIssues




@end


#endif