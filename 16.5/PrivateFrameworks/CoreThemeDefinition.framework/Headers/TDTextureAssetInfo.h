// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TDTEXTUREASSETINFO_H
#define TDTEXTUREASSETINFO_H

@class NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TDTextureAssetInfo : NSObject <NSCopying>



@property (copy, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (nonatomic) BOOL flipped; // ivar: _flipped
@property (nonatomic) NSUInteger mipLevel; // ivar: _mipLevel
@property (copy, nonatomic) NSURL *mipsURL;
@property (nonatomic) NSInteger textureFace; // ivar: _textureFace


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)dealloc;


@end


#endif