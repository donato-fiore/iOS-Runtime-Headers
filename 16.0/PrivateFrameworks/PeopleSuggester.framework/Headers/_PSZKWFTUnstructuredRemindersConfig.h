// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PSZKWFTUNSTRUCTUREDREMINDERSCONFIG_H
#define _PSZKWFTUNSTRUCTUREDREMINDERSCONFIG_H


#import <Foundation/Foundation.h>


@interface _PSZKWFTUnstructuredRemindersConfig : NSObject

@property (readonly, nonatomic) NSInteger defaultConfidenceCategory; // ivar: _defaultConfidenceCategory
@property (readonly, nonatomic) CGFloat endSecondsFromQuery; // ivar: _endSecondsFromQuery
@property (readonly, nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (readonly, nonatomic) float priorScoreThreshold; // ivar: _priorScoreThreshold
@property (readonly, nonatomic) CGFloat startSecondsFromQuery; // ivar: _startSecondsFromQuery


-(id)initWithIsEnabled:(BOOL)arg0 defaultConfidenceCategory:(NSInteger)arg1 ;
-(id)initWithIsEnabled:(BOOL)arg0 defaultConfidenceCategory:(NSInteger)arg1 startSecondsFromQuery:(CGFloat)arg2 endSecondsFromQuery:(CGFloat)arg3 priorScoreThreshold:(float)arg4 ;


@end


#endif