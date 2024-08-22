// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PSZKWFTCALENDAREVENTCONFIG_H
#define _PSZKWFTCALENDAREVENTCONFIG_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface _PSZKWFTCalendarEventConfig : NSObject

@property (readonly, nonatomic) NSInteger defaultConfidenceCategory; // ivar: _defaultConfidenceCategory
@property (readonly, nonatomic) CGFloat endSecondsFromQuery; // ivar: _endSecondsFromQuery
@property (readonly, nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (readonly, nonatomic) NSUInteger maxOtherParticipants; // ivar: _maxOtherParticipants
@property (readonly, nonatomic) CGFloat startSecondsFromQuery; // ivar: _startSecondsFromQuery
@property (readonly, copy, nonatomic) NSArray *urlDomainsToSkip; // ivar: _urlDomainsToSkip


-(id)initWithIsEnabled:(BOOL)arg0 defaultConfidenceCategory:(NSInteger)arg1 ;
-(id)initWithIsEnabled:(BOOL)arg0 defaultConfidenceCategory:(NSInteger)arg1 startSecondsFromQuery:(CGFloat)arg2 endSecondsFromQuery:(CGFloat)arg3 urlDomainsToSkip:(id)arg4 maxOtherParticipants:(NSUInteger)arg5 ;


@end


#endif