// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTHEADLINEPERSONALIZATIONMETADATA_H
#define NTHEADLINEPERSONALIZATIONMETADATA_H

@class NSString, NSDictionary;
@protocol NTHeadlinePersonalizationMetadata;

#import <Foundation/Foundation.h>


@interface NTHeadlinePersonalizationMetadata : NSObject <NTHeadlinePersonalizationMetadata>



@property (readonly, copy, nonatomic) NSString *articleID; // ivar: _articleID
@property (readonly, copy, nonatomic) NSString *publisherID; // ivar: _publisherID
@property (readonly, copy, nonatomic) NSDictionary *scoredTopicIDs; // ivar: _scoredTopicIDs


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithArticleID:(id)arg0 publisherID:(id)arg1 scoredTopicIDs:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif