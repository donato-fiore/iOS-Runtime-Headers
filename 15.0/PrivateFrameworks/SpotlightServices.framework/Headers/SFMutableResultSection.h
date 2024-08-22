// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFMUTABLERESULTSECTION_H
#define SFMUTABLERESULTSECTION_H

@class SFResultSection, NSNumber, NSString, SPGroupHeadingResult, NSArray, NSMutableOrderedSet;



@interface SFMutableResultSection : SFResultSection

@property BOOL doNotFold; // ivar: _doNotFold
@property (nonatomic) unsigned int domain; // ivar: _domain
@property (retain, nonatomic) NSNumber *groupId; // ivar: _groupId
@property (retain, nonatomic) NSString *groupName; // ivar: _groupName
@property (retain, nonatomic) SPGroupHeadingResult *headerResult; // ivar: _headerResult
@property (retain, nonatomic) NSArray *hiddenExtResults; // ivar: _hiddenExtResults
@property (nonatomic) BOOL isGlanceCategory; // ivar: _isGlanceCategory
@property BOOL pinToTop; // ivar: _pinToTop
@property (retain, nonatomic) NSString *relatedSectionBundleIdentifier; // ivar: _relatedSectionBundleIdentifier
@property (retain, nonatomic) NSMutableOrderedSet *resultSet; // ivar: _resultSet
@property (retain, nonatomic) NSString *resultSetIdentifier; // ivar: _resultSetIdentifier
@property (nonatomic) BOOL serialized; // ivar: _serialized
@property int source; // ivar: _source
@property (retain, nonatomic) NSString *sourceDomain; // ivar: _sourceDomain


+(BOOL)supportsSecureCoding;
-(NSUInteger)indexOfResult:(id)arg0 ;
-(NSUInteger)resultsCount;
-(id)copy;
-(id)copySectionRemovingResults:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPrototype:(id)arg0 ;
-(id)initWithResultSection:(id)arg0 ;
-(id)initWithSection:(id)arg0 ;
-(id)mutableDeepCopy;
-(id)objectForFeedback;
-(id)objectForFeedbackWithResultsArray:(id)arg0 ;
-(id)results;
-(id)resultsAtIndex:(NSUInteger)arg0 ;
-(void)addHiddenExtResult:(id)arg0 ;
-(void)addResults:(id)arg0 ;
-(void)addResults:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)addResultsFromArray:(id)arg0 ;
-(void)clearResults;
-(void)encodeWithCoder:(id)arg0 ;
-(void)moveResultsAtIndexes:(id)arg0 toIndex:(NSUInteger)arg1 ;
-(void)removeResults:(id)arg0 ;
-(void)removeResultsAtIndex:(NSUInteger)arg0 ;
-(void)removeResultsInArray:(id)arg0 ;
-(void)removeResultsInRange:(struct _NSRange )arg0 ;
-(void)replaceResultsAtIndex:(NSUInteger)arg0 withResults:(id)arg1 ;
-(void)setResults:(id)arg0 ;
-(void)sortRange:(struct _NSRange )arg0 options:(NSUInteger)arg1 usingComparator:(id)arg2 ;
-(void)sortUsingComparator:(id)arg0 ;


@end


#endif