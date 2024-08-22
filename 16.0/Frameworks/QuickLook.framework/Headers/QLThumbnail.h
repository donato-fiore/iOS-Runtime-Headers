// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLTHUMBNAIL_H
#define QLTHUMBNAIL_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface QLThumbnail : NSObject

@property (retain) NSURL *url; // ivar: _url


+(id)defaultDescriptors;
+(id)sharedQueue;
// -(BOOL)provideImages:(id)arg0 error:(unk)arg1  ;
-(id)imageForUseMode:(NSUInteger)arg0 descriptor:(id)arg1 generateIfNeeded:(BOOL)arg2 contentRect:(struct CGRect *)arg3 error:(*id)arg4 ;
-(id)initWithURL:(id)arg0 ;
-(id)thumbnailCreationOperationForUseMode:(NSUInteger)arg0 descriptor:(id)arg1 ;
-(id)thumbnailCreationOperationForUseMode:(NSUInteger)arg0 descriptor:(id)arg1 generateIfNeeded:(BOOL)arg2 ;


@end


#endif