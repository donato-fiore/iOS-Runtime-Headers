// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCIMAGE_H
#define BCIMAGE_H

@class NSData, NSString, NSDictionary, UIImage;

#import <Foundation/Foundation.h>


@interface BCImage : NSObject {
    NSData *_imageData;
    NSString *_identifier;
    NSString *_imageDescription;
}


@property (readonly, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) NSString *imageDescription;


-(id)initWithImageData:(id)arg0 identifier:(id)arg1 description:(id)arg2 ;


@end


#endif