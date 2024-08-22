// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKCONTEXTRESPONSE_H
#define CKCONTEXTRESPONSE_H

@class NSArray, NSString, NSError, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CKContextRequest.h"
#import "CKContextFingerprintMinHash.h"

@interface CKContextResponse : NSObject <NSSecureCoding>

 {
    BOOL _discarded;
    CGFloat _hideCompletionsTimeLimit;
    uint8_t _shown;
    uint8_t _engaged;
    uint8_t _transactionSuccessful;
    uint8_t _shownLogged;
    uint8_t _engagementLogged;
    uint8_t _transactionLogged;
    NSArray *_loggingCouldHaveShown;
    uint8_t _loggingShownMax;
    uint8_t _loggingServerOverride;
    uint8_t _loggingCouldHaveShownMax;
    uint8_t _loggingInputLengthMax;
}


@property (nonatomic) CGSize availableLayoutSize; // ivar: _availableLayoutSize
@property (retain, nonatomic) NSString *debug; // ivar: _debug
@property (retain, nonatomic) CKContextRequest *debugRequest; // ivar: _debugRequest
@property (retain, nonatomic) NSArray *donorBundleIdentifiers; // ivar: _donorBundleIdentifiers
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSDate *hideCompletionsAfterDate; // ivar: _hideCompletionsAfterDate
@property (retain, nonatomic) NSString *languageTag; // ivar: _languageTag
@property (retain, nonatomic) NSArray *level1Topics; // ivar: _level1Topics
@property (retain, nonatomic) NSArray *level2Topics; // ivar: _level2Topics
@property (nonatomic) NSUInteger mustPrefixMatchLength; // ivar: _mustPrefixMatchLength
@property (retain, nonatomic) CKContextFingerprintMinHash *requestFingerprint; // ivar: _requestFingerprint
@property (nonatomic) NSUInteger requestType; // ivar: _requestType
@property (retain, nonatomic) NSDate *responseDate; // ivar: _responseDate
@property (retain, nonatomic) NSArray *results; // ivar: _results
@property (nonatomic) BOOL resultsNeedFiltering; // ivar: _resultsNeedFiltering
@property (copy, nonatomic) NSString *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
+(id)invalidProcessError;
+(id)malformedRequestError;
+(id)missingEntitlementError;
+(id)serviceBusyError;
+(id)serviceDisabledError;
+(id)timeoutError;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isPlaceholder;
-(NSUInteger)hash;
-(id)completer;
-(id)initPlaceholderWithUUID:(id)arg0 requestType:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithError:(id)arg0 requestType:(NSUInteger)arg1 ;
-(id)initWithResults:(id)arg0 requestType:(NSUInteger)arg1 ;
-(id)responseSummary:(BOOL)arg0 showHigherLevelTopics:(BOOL)arg1 maxPrefix:(NSInteger)arg2 ;
-(id)resultByQuery:(id)arg0 ;
-(id)toJSONSerializableDictionary;
-(void)addDebug:(id)arg0 ;
-(void)appendToDebug:(id)arg0 ;
-(void)dealloc;
-(void)discard;
-(void)discardAndLogCompleter:(id)arg0 likelyUnsolicited:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)logEngagement:(id)arg0 forInputLength:(NSUInteger)arg1 completion:(id)arg2 likelyUnsolicited:(BOOL)arg3 ;
-(void)logTransactionSuccessfulForInputLength:(NSUInteger)arg0 completion:(id)arg1 likelyUnsolicited:(BOOL)arg2 ;
-(void)markResultsShown:(NSUInteger)arg0 serverOverride:(BOOL)arg1 forInputLength:(NSUInteger)arg2 results:(id)arg3 ;
-(void)setHideCompletionsTimeLimit:(CGFloat)arg0 ;


@end


#endif