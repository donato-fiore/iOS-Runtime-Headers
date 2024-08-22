// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKENHANCEDLOGGINGPERSISTENCE_H
#define FBKENHANCEDLOGGINGPERSISTENCE_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface FBKEnhancedLoggingPersistence : NSObject

@property (readonly, nonatomic) BOOL hasLoggingSessions;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSInteger loggingSessionCount;
@property (readonly, nonatomic) NSString *searchText; // ivar: _searchText
@property (readonly, nonatomic) NSArray *sessions;


+(id)sharedInstance;
-(id)deserializeSessionData:(id)arg0 ;
-(id)init;
-(id)mutableSessionDictionary;
-(void)deleteSession:(id)arg0 ;
-(void)deleteSessionWithFeedbackID:(id)arg0 ;
-(void)saveSession:(id)arg0 ;
-(void)saveSessionForContentItem:(id)arg0 followup:(id)arg1 filePredicate:(id)arg2 devices:(id)arg3 ;


@end


#endif