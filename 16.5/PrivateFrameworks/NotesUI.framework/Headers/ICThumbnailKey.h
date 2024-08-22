// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICTHUMBNAILKEY_H
#define ICTHUMBNAILKEY_H

@class NSString, NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ICThumbnailKey : NSObject <NSCopying>

 {
    ? accountId;
    ? objectId;
    ? thumbnailId;
}


@property (nonatomic, readonly) NSString *accountId;
@property (nonatomic, readonly) NSURL *containerUrl;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSURL *descriptionUrl;
@property (nonatomic, readonly) NSInteger hash;
@property (nonatomic, readonly) NSURL *imageUrl;
@property (nonatomic, readonly) NSString *objectId;
@property (nonatomic, readonly) NSString *thumbnailId;


+(id)recentObjectId;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithAccountId:(id)arg0 objectId:(id)arg1 ;
-(id)initWithAccountId:(id)arg0 objectId:(id)arg1 thumbnailId:(id)arg2 ;
-(id)initWithType:(NSInteger)arg0 accountId:(id)arg1 objectId:(id)arg2 preferredSize:(struct CGSize )arg3 scale:(CGFloat)arg4 appearance:(NSUInteger)arg5 ;
-(id)initWithType:(NSInteger)arg0 accountId:(id)arg1 objectId:(id)arg2 preferredSize:(struct CGSize )arg3 scale:(CGFloat)arg4 appearance:(NSUInteger)arg5 isRTL:(BOOL)arg6 contentSizeCategory:(id)arg7 hasBoldText:(BOOL)arg8 hasButtonShapes:(BOOL)arg9 hasDarkerSystemColors:(BOOL)arg10 hasBorder:(BOOL)arg11 ;
-(id)initWithType:(NSInteger)arg0 accountId:(id)arg1 objectId:(id)arg2 preferredSize:(struct CGSize )arg3 traitCollection:(id)arg4 ;


@end


#endif