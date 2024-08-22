// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC5TEAUI16IMAGEASSETHANDLE_H
#define _TTC5TEAUI16IMAGEASSETHANDLE_H

@class UIImage, NSString;
@protocol TSAssetHandleType;

#import <Foundation/Foundation.h>


@interface _TtC5TeaUI16ImageAssetHandle : NSObject <TSAssetHandleType>

 {
    ? uniqueKey;
}


@property (nonatomic, retain) UIImage *fallbackImage; // ivar: fallbackImage
@property (nonatomic, readonly) NSString *filePath;
@property (nonatomic, copy) NSString *uniqueKey;


-(id)init;
-(void)downloadWithGroup:(id)arg0 ;


@end


#endif