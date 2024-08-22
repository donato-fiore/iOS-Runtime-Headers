// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXIMAGEREQUEST_H
#define SXIMAGEREQUEST_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>


@interface SXImageRequest : NSObject

@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) NSString *imageIdentifier; // ivar: _imageIdentifier
@property (copy, nonatomic) id *loadingBlock; // ivar: _loadingBlock
@property (readonly, nonatomic) BOOL preserveColorspace; // ivar: _preserveColorspace
@property (readonly, nonatomic) NSUInteger qualities; // ivar: _qualities
@property (readonly, nonatomic) CGSize size; // ivar: _size


-(id)initWithImageIdentifier:(id)arg0 imageQualities:(NSUInteger)arg1 url:(id)arg2 size:(struct CGSize )arg3 preserveColorspace:(BOOL)arg4 loadingBlock:(id)arg5 ;


@end


#endif