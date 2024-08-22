// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSPERFORMENTITYQUERYCOMMAND_H
#define SSPERFORMENTITYQUERYCOMMAND_H

@class SFPerformEntityQueryCommand, NSDictionary;



@interface SSPerformEntityQueryCommand : SFPerformEntityQueryCommand

@property (nonatomic) BOOL fromSuggestion; // ivar: _fromSuggestion
@property (nonatomic) BOOL includeSyndicatedPhotos; // ivar: _includeSyndicatedPhotos
@property (nonatomic) BOOL isNLP; // ivar: _isNLP
@property (copy, nonatomic) NSDictionary *spotlightRankCategories; // ivar: _spotlightRankCategories
@property (copy, nonatomic) NSDictionary *spotlightRankTerms; // ivar: _spotlightRankTerms


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif