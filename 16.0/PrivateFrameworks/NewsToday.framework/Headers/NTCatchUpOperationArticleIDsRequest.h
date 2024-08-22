// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTCATCHUPOPERATIONARTICLEIDSREQUEST_H
#define NTCATCHUPOPERATIONARTICLEIDSREQUEST_H

@class NSOrderedSet, NSDictionary;
@protocol NSCopying, NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NTCatchUpOperationArticleIDsRequest : NSObject <NSCopying>



@property (copy, nonatomic) NSOrderedSet *articleIDs; // ivar: _articleIDs
@property (copy, nonatomic) NSObject<NSCopying><NSSecureCoding> *identifier; // ivar: _identifier
@property (copy, nonatomic) NSDictionary *overrideHeadlineMetadataByArticleID; // ivar: _overrideHeadlineMetadataByArticleID


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithArticleIDs:(id)arg0 overrideHeadlineMetadataByArticleID:(id)arg1 ;


@end


#endif