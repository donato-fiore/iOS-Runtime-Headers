// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFSEARCHSUGGESTION_H
#define SFSEARCHSUGGESTION_H

@class NSString, NSDictionary, NSArray, NSData, NSMutableDictionary;
@protocol SFSearchSuggestion, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SFSearchSuggestion : NSObject <SFSearchSuggestion, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *detailText; // ivar: _detailText
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSArray *duplicateSuggestions; // ivar: _duplicateSuggestions
@property (copy, nonatomic) NSString *fbr; // ivar: _fbr
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) BOOL previouslyEngaged; // ivar: _previouslyEngaged
@property (copy, nonatomic) NSString *query; // ivar: _query
@property (copy, nonatomic) NSString *scopedSearchApplicationBundleIdentifier; // ivar: _scopedSearchApplicationBundleIdentifier
@property (nonatomic) CGFloat score; // ivar: _score
@property (copy, nonatomic) NSMutableDictionary *serverFeatures; // ivar: _serverFeatures
@property (copy, nonatomic) NSString *suggestion; // ivar: _suggestion
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *topicIdentifier; // ivar: _topicIdentifier
@property (nonatomic) int type; // ivar: _type
@property (copy, nonatomic) NSString *utteranceText; // ivar: _utteranceText


+(BOOL)supportsSecureCoding;
-(BOOL)hasPreviouslyEngaged;
-(BOOL)hasScore;
-(BOOL)hasType;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 suggestion:(id)arg1 query:(id)arg2 score:(CGFloat)arg3 type:(int)arg4 ;
-(id)initWithProtobuf:(id)arg0 ;
-(id)initWithSuggestion:(id)arg0 query:(id)arg1 score:(CGFloat)arg2 type:(int)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif