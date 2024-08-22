// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CPVISIBLESUGGESTIONSFEEDBACK_H
#define _CPVISIBLESUGGESTIONSFEEDBACK_H

@class PBCodable, NSString, NSData, NSArray;
@protocol _CPProcessableFeedback, _CPVisibleSuggestionsFeedback, NSSecureCoding;



@interface _CPVisibleSuggestionsFeedback : PBCodable <_CPProcessableFeedback, _CPVisibleSuggestionsFeedback, NSSecureCoding>

 {
    NSUInteger _timestamp;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *suggestions; // ivar: _suggestions
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger timestamp;
@property (nonatomic) NSUInteger timestamp;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)init;
-(id)initWithFacade:(id)arg0 ;
-(id)suggestionsAtIndex:(NSUInteger)arg0 ;
-(void)addSuggestions:(id)arg0 ;
-(void)clearSuggestions;
-(void)writeTo:(id)arg0 ;


@end


#endif