// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLSQLSTATEMENTRECORDERSTATEMENT_H
#define PLSQLSTATEMENTRECORDERSTATEMENT_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface PLSQLStatementRecorderStatement : NSObject

@property (nonatomic) NSUInteger backtraceHash; // ivar: _backtraceHash
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) NSArray *firstBacktrace; // ivar: _firstBacktrace
@property (nonatomic) unsigned int fullscanSteps; // ivar: _fullscanSteps
@property (readonly, nonatomic) BOOL isInternal;
@property (nonatomic) BOOL isSearch; // ivar: _isSearch
@property (retain, nonatomic) NSString *mocName; // ivar: _mocName
@property (retain, nonatomic) NSString *normalizedStatementSQL; // ivar: _normalizedStatementSQL
@property (nonatomic) NSInteger pagesHit; // ivar: _pagesHit
@property (nonatomic) NSInteger pagesMissed; // ivar: _pagesMissed
@property (nonatomic) NSInteger photoLibraryID; // ivar: _photoLibraryID
@property (nonatomic) unsigned int qos; // ivar: _qos
@property (retain, nonatomic) NSString *queryPlan; // ivar: _queryPlan
@property (retain, nonatomic) NSString *statementSQL; // ivar: _statementSQL
@property (retain, nonatomic) NSString *statusMessage; // ivar: _statusMessage
@property (nonatomic) CGFloat time; // ivar: _time
@property (nonatomic) unsigned int vmSteps; // ivar: _vmSteps


+(BOOL)isInternalForStatementSQL:(id)arg0 ;
+(NSInteger)libraryForDbURL:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)jsonFragmentData;


@end


#endif