// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSUIRESETSTATISTICSGROUP_H
#define PSUIRESETSTATISTICSGROUP_H

@class CHManager, PSSpecifier, PSConfirmationSpecifier;
@protocol PSUIResetStatisticsGroupDelegate;

#import <Foundation/Foundation.h>


@interface PSUIResetStatisticsGroup : NSObject

@property (retain, nonatomic) CHManager *callHistoryManager; // ivar: _callHistoryManager
@property (weak, nonatomic) NSObject<PSUIResetStatisticsGroupDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) PSSpecifier *groupSpecifier; // ivar: _groupSpecifier
@property (nonatomic) NSUInteger policy; // ivar: _policy
@property (retain, nonatomic) PSConfirmationSpecifier *resetButtonSpecifier; // ivar: _resetButtonSpecifier


-(id)_lastUpdateDate;
-(id)initWithPolicy:(NSUInteger)arg0 ;
-(id)specifiers;
-(void)_updateLastResetText;
-(void)clearStats:(id)arg0 ;


@end


#endif