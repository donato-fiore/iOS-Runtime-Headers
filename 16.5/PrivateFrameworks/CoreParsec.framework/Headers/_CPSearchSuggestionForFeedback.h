// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CPSEARCHSUGGESTIONFORFEEDBACK_H
#define _CPSEARCHSUGGESTIONFORFEEDBACK_H

@class PBCodable, NSString, NSData;
@protocol _CPSearchSuggestionForFeedback, NSSecureCoding;



@interface _CPSearchSuggestionForFeedback : PBCodable <_CPSearchSuggestionForFeedback, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *fbr; // ivar: _fbr
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *query; // ivar: _query
@property (nonatomic) CGFloat score; // ivar: _score
@property (copy, nonatomic) NSString *suggestion; // ivar: _suggestion
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *topicIdentifier; // ivar: _topicIdentifier
@property (nonatomic) int type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif