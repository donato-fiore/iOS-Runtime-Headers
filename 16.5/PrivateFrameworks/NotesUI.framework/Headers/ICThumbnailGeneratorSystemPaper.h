// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICTHUMBNAILGENERATORSYSTEMPAPER_H
#define ICTHUMBNAILGENERATORSYSTEMPAPER_H

@protocol ICThumbnailCaching;


#import "ICThumbnailGenerator.h"

@interface ICThumbnailGeneratorSystemPaper : ICThumbnailGenerator

@property (nonatomic, readonly) NSObject<ICThumbnailCaching> *cache; // ivar: cache


+(id)chromeBackdropImageUrlFor:(id)arg0 ;
+(struct CGSize )chromeSize;
-(id)initWithManagedObjectContext:(id)arg0 ;
-(id)initWithManagedObjectContext:(id)arg0 cache:(id)arg1 ;
-(id)thumbnailWith:(id)arg0 ;
-(void)generateThumbnailWithConfiguration:(id)arg0 completion:(id)arg1 ;


@end


#endif