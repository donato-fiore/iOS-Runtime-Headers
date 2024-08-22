// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SBUSERNOTIFICATIONIMAGEDESCRIPTOR_H
#define _SBUSERNOTIFICATIONIMAGEDESCRIPTOR_H

@class NSString, UIImage;

#import <Foundation/Foundation.h>


@interface _SBUserNotificationImageDescriptor : NSObject {
    NSString *_imagePath;
    NSString *_catalogPath;
    NSString *_catalogKey;
    UIImage *_lazy_image;
}


@property (readonly, nonatomic) UIImage *image;


-(id)initWithImageCatalogPath:(id)arg0 catalogKey:(id)arg1 ;
-(id)initWithImagePath:(id)arg0 ;


@end


#endif