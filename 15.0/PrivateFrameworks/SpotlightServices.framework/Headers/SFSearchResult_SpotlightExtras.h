// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFSEARCHRESULT_SPOTLIGHTEXTRAS_H
#define SFSEARCHRESULT_SPOTLIGHTEXTRAS_H

@class SFSearchResult, SFPunchout, NSData, NSMutableDictionary, NSString, NSNumber, NSMutableArray, NSDate;
@protocol NSSecureCoding;


#import "PRSRankingItem.h"

@interface SFSearchResult_SpotlightExtras : SFSearchResult <NSSecureCoding>

 {
    SFPunchout *_cachedPunchout;
}


@property (retain, nonatomic) NSData *attributeData; // ivar: _attributeData
@property (retain, nonatomic) NSMutableDictionary *backendData; // ivar: _backendData
@property (retain, nonatomic) NSString *contentURL; // ivar: _contentURL
@property (retain, nonatomic) NSNumber *documentIdentifier; // ivar: _documentIdentifier
@property (retain, nonatomic) NSMutableArray *duplicatedItems; // ivar: _duplicatedItems
@property (nonatomic) unsigned int feedbackBlockId; // ivar: _feedbackBlockId
@property (retain, nonatomic) NSNumber *fileIdentifier; // ivar: _fileIdentifier
@property (retain, nonatomic) NSString *filename; // ivar: _filename
@property (nonatomic) BOOL forceNoTopHit; // ivar: _forceNoTopHit
@property (nonatomic) BOOL hasCommunicationContent; // ivar: _hasCommunicationContent
@property (nonatomic) BOOL hasTextContent; // ivar: _hasTextContent
@property (nonatomic) BOOL hasTextContentMatch; // ivar: _hasTextContentMatch
@property (nonatomic) BOOL isAppClip; // ivar: _isAppClip
@property (nonatomic) BOOL isSafariTopHit; // ivar: _isSafariTopHit
@property (nonatomic) BOOL isWebClip; // ivar: _isWebClip
@property (nonatomic) float l2score; // ivar: _l2score
@property (retain, nonatomic) NSDate *lastUsedDate; // ivar: _lastUsedDate
@property (retain, nonatomic) NSString *launchString; // ivar: _launchString
@property (retain, nonatomic) NSNumber *parentFileIdentifier; // ivar: _parentFileIdentifier
@property (retain, nonatomic) NSString *personIdentifier; // ivar: _personIdentifier
@property (retain, nonatomic) NSString *personQueryIdentifier; // ivar: _personQueryIdentifier
@property (nonatomic) NSUInteger predictionsFeedbackActionType; // ivar: _predictionsFeedbackActionType
@property (retain, nonatomic) NSString *protectionClass; // ivar: _protectionClass
@property (retain) PRSRankingItem *rankingItem; // ivar: _rankingItem
@property (nonatomic) unk score; // ivar: _score
@property (retain, nonatomic) NSData *suggestionsFeedbackData; // ivar: _suggestionsFeedbackData
@property (retain, nonatomic) NSString *userActivityType; // ivar: _userActivityType


+(BOOL)supportsSecureCoding;
+(void)initialize;
-(BOOL)isSafariTopHitForQuery:(id)arg0 ;
-(id)debugDescription;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)objectForFeedback;
-(id)punchout;
-(id)valueForAttribute:(id)arg0 withType:(Class)arg1 ;
-(void)clearBackendData;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setPropertiesOnResultCopy:(id)arg0 ;
-(void)setUrl:(id)arg0 ;


@end


#endif