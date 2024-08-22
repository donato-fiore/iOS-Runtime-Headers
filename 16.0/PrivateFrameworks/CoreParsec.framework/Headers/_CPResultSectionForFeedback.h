// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CPRESULTSECTIONFORFEEDBACK_H
#define _CPRESULTSECTIONFORFEEDBACK_H

@class PBCodable, NSString, NSData, NSArray;
@protocol _CPResultSectionForFeedback, NSSecureCoding;



@interface _CPResultSectionForFeedback : PBCodable <_CPResultSectionForFeedback, NSSecureCoding>



@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSData *fallbackResultSection; // ivar: _fallbackResultSection
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isInitiallyHidden; // ivar: _isInitiallyHidden
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int knownBundleIdentifier; // ivar: _knownBundleIdentifier
@property (nonatomic) CGFloat rankingScore; // ivar: _rankingScore
@property (copy, nonatomic) NSArray *results; // ivar: _results
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger whichBundleid; // ivar: _whichBundleid


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)resultsAtIndex:(NSUInteger)arg0 ;
-(void)addResults:(id)arg0 ;
-(void)clearBundleid;
-(void)clearResults;
-(void)writeTo:(id)arg0 ;


@end


#endif