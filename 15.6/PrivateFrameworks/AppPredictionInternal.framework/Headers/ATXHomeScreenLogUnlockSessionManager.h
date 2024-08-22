// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXHOMESCREENLOGUNLOCKSESSIONMANAGER_H
#define ATXHOMESCREENLOGUNLOCKSESSIONMANAGER_H

@class NSMutableArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ATXScreenLogUnlockSession.h"

@interface ATXHomeScreenLogUnlockSessionManager : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSMutableArray *completedSessions; // ivar: _completedSessions
@property (retain, nonatomic) ATXScreenLogUnlockSession *currentSession; // ivar: _currentSession
@property (nonatomic) BOOL isInSession; // ivar: _isInSession


+(BOOL)supportsSecureCoding;
+(id)_currentSettings;
+(id)currentSettings;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXHomeScreenLogUnlockSessionManager:(id)arg0 ;
-(NSInteger)_eventStatusWithUIEvent:(id)arg0 ;
-(NSInteger)updateSessionStateWithUIEvent:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIsInSession:(BOOL)arg0 currentSession:(id)arg1 completedSessions:(id)arg2 ;
-(id)removeCompletedSessions;
-(id)summarizeCompletedSessions;
-(void)_updateCurrentSessionWithUIEvent:(id)arg0 eventStatus:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif