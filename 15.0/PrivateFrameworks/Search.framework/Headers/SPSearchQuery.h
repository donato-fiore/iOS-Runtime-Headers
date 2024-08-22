// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPSEARCHQUERY_H
#define SPSEARCHQUERY_H

@class NSString, NSArray, SPSearchQueryContext;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SPSearchQuery : NSObject <NSCopying>

 {
    NSUInteger _queryID;
    NSString *_searchString;
    NSString *_keyboardLanguage;
    NSString *_keyboardPrimaryLanguage;
    CGFloat _scaleFactor;
    NSArray *markedTextArray;
    BOOL _finished;
    uint8_t _cancelled;
}


@property (readonly, nonatomic) CGFloat cancellationTime; // ivar: _cancellationTime
@property (readonly, nonatomic) BOOL cancelled;
@property (nonatomic) NSInteger contentFilters; // ivar: _contentFilters
@property (readonly, nonatomic) NSUInteger creationStamp; // ivar: _creationStamp
@property (readonly, nonatomic) CGFloat creationTime; // ivar: _creationTime
@property (readonly, nonatomic) CGFloat currentTime; // ivar: _currentTime
@property (retain, nonatomic) NSArray *disabledApps; // ivar: _disabledApps
@property (retain, nonatomic) NSArray *disabledBundles; // ivar: _disabledBundles
@property (nonatomic) BOOL grouped; // ivar: _grouped
@property (nonatomic) BOOL infinitePatience; // ivar: _infinitePatience
@property (nonatomic) BOOL internalDebug; // ivar: _internalDebug
@property (nonatomic) BOOL internalValidation; // ivar: _internalValidation
@property (nonatomic) BOOL isWideScreen; // ivar: _isWideScreen
@property (nonatomic) NSInteger maxCount; // ivar: _maxCount
@property (nonatomic) BOOL noTokenize; // ivar: _noTokenize
@property (nonatomic) BOOL promoteLocalResults; // ivar: _promoteLocalResults
@property (nonatomic) BOOL promoteParsecResults; // ivar: _promoteParsecResults
@property (readonly, nonatomic) SPSearchQueryContext *queryContext; // ivar: _queryContext
@property (nonatomic) NSUInteger queryIdent; // ivar: _queryIdent


-(BOOL)hasMarkedText;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithQuery:(id)arg0 domains:(id)arg1 ;
-(id)initWithSearchQueryContext:(id)arg0 ;
-(void)cancel;
-(void)execute:(id)arg0 ;


@end


#endif