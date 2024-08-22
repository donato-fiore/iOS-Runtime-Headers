// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPIMAGEBULLETPROVIDER_H
#define TSWPIMAGEBULLETPROVIDER_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface TSWPImageBulletProvider : NSObject {
    NSMutableArray *_images;
    NSMutableArray *_filenames;
}


@property (readonly, nonatomic) NSArray *predefinedImages;


+(id)sharedInstance;
-(id)dataForDefaultImageBulletWithContext:(id)arg0 ;
-(id)dataForImageBullet:(id)arg0 withContext:(id)arg1 ;
-(id)p_pathToPredefinedImages;
-(id)p_predefinedImageNames;


@end


#endif