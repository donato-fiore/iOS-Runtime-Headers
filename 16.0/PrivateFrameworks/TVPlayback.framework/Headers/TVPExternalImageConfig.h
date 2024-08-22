// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVPEXTERNALIMAGECONFIG_H
#define TVPEXTERNALIMAGECONFIG_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>


@interface TVPExternalImageConfig : NSObject

@property (copy, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (nonatomic) NSInteger imageCount; // ivar: _imageCount
@property (nonatomic) CGFloat imageInterval; // ivar: _imageInterval
@property (copy, nonatomic) NSString *imageNameFormatString; // ivar: _imageNameFormatString
@property (nonatomic) BOOL usesOneBasedImageIndexes; // ivar: _usesOneBasedImageIndexes
@property (copy, nonatomic) NSString *version; // ivar: _version




@end


#endif