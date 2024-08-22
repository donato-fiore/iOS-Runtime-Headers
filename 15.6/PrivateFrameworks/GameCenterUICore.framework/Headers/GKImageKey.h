// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKIMAGEKEY_H
#define GKIMAGEKEY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface GKImageKey : NSObject {
    NSString *_filePath;
    NSString *_cacheKey;
}


@property (retain, nonatomic) NSString *basename; // ivar: _basename
@property (readonly, nonatomic) NSString *cacheKey;
@property (readonly, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSString *imageID; // ivar: _imageID
@property (nonatomic) CGSize size; // ivar: _size


+(id)fileNameWithIdentifierInImageSource:(id)arg0 ;
+(id)keyForImageIdentifier:(id)arg0 withImageSource:(id)arg1 ;


@end


#endif