// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASSETPHOTOCOMMENTPROPERTIES_H
#define PHASSETPHOTOCOMMENTPROPERTIES_H



#import "PHAssetPropertySet.h"

@interface PHAssetPhotoCommentProperties : PHAssetPropertySet

@property (readonly, nonatomic) NSUInteger commentCount; // ivar: _commentCount
@property (readonly, nonatomic) BOOL hasUserLiked; // ivar: _hasUserLiked
@property (readonly, nonatomic) NSUInteger likeCount; // ivar: _likeCount


+(BOOL)isToMany;
+(id)entityName;
+(id)keyPathFromPrimaryObject;
+(id)keyPathToPrimaryObject;
+(id)propertiesToFetch;
+(id)propertySetName;
-(id)initWithFetchDictionary:(id)arg0 asset:(id)arg1 prefetched:(BOOL)arg2 ;


@end


#endif