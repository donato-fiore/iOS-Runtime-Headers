// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPSIMAGESTORE_H
#define CPSIMAGESTORE_H


#import <Foundation/Foundation.h>


@interface CPSImageStore : NSObject



+(id)_storeDirectoryURL:(*id)arg0 ;
+(id)keyForGEOStyleAttributes:(id)arg0 error:(*id)arg1 ;
+(id)keyForImageURL:(id)arg0 error:(*id)arg1 ;
+(id)keyForMapsCategoryID:(id)arg0 error:(*id)arg1 ;
+(id)keyForPOIMuid:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)storeImageData:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(id)storedImageForKey:(id)arg0 ;
-(void)_purgeOldFilesInDirectory:(id)arg0 timeToLive:(CGFloat)arg1 ;
-(void)purgeOldImagesWithCompletionHandler:(id)arg0 ;
-(void)test_purgeOldFilesInDirectory:(id)arg0 timeToLive:(CGFloat)arg1 ;


@end


#endif