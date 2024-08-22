// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTLOCALNEWSPROMOTIONTRANSFORMATION_H
#define NTLOCALNEWSPROMOTIONTRANSFORMATION_H

@class NSString;
@protocol NTFeedTransforming;

#import <Foundation/Foundation.h>


@interface NTLocalNewsPromotionTransformation : NSObject <NTFeedTransforming>



@property (readonly, nonatomic) NSObject<NTFeedTransforming> *baseTransformation; // ivar: _baseTransformation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *localNewsPromotedArticleID; // ivar: _localNewsPromotedArticleID
@property (readonly, nonatomic) NSUInteger localNewsPromotionIndex; // ivar: _localNewsPromotionIndex
@property (readonly) Class superclass;


-(id)init;
-(id)initWithLocalNewsPromotedArticleID:(id)arg0 localNewsPromotionIndex:(NSUInteger)arg1 baseTransformation:(id)arg2 ;
-(id)transformFeedItems:(id)arg0 ;


@end


#endif