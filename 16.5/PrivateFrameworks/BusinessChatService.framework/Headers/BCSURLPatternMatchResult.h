// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCSURLPATTERNMATCHRESULT_H
#define BCSURLPATTERNMATCHRESULT_H

@class NSString, NSDate, NSURL;
@protocol BCSExpiring, BCSDateHelperProtocol;

#import <Foundation/Foundation.h>


@interface BCSURLPatternMatchResult : NSObject <BCSExpiring>



@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) NSObject<BCSDateHelperProtocol> *dateHelper; // ivar: _dateHelper
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, nonatomic) NSURL *extractedURL; // ivar: _extractedURL
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL matchFound;
@property (readonly, nonatomic) NSURL *originalURL; // ivar: _originalURL
@property (readonly, nonatomic) NSString *pattern; // ivar: _pattern
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger totalAnyMatches; // ivar: _totalAnyMatches
@property (readonly, nonatomic) NSUInteger totalConsecutivePrefixMatches; // ivar: _totalConsecutivePrefixMatches
@property (readonly, nonatomic) NSUInteger totalExactMatches; // ivar: _totalExactMatches


+(BOOL)supportsSecureCoding;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithOriginalURL:(id)arg0 extractedURL:(id)arg1 totalConsecutivePrefixMatches:(NSUInteger)arg2 totalExactMatches:(NSUInteger)arg3 totalAnyMatches:(NSUInteger)arg4 bundleID:(id)arg5 pattern:(id)arg6 expirationDate:(id)arg7 dateHelper:(id)arg8 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif