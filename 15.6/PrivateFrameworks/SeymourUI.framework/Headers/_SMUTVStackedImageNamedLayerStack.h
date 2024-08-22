// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SMUTVSTACKEDIMAGENAMEDLAYERSTACK_H
#define _SMUTVSTACKEDIMAGENAMEDLAYERSTACK_H

@class NSString, NSArray;
@protocol UINamedLayerStack, NSCopying;

#import <Foundation/Foundation.h>


@interface _SMUTVStackedImageNamedLayerStack : NSObject <UINamedLayerStack, NSCopying>

 {
    *CGImage _flattenedImage;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL flatImageContainsCornerRadius; // ivar: _flatImageContainsCornerRadius
@property (nonatomic) *CGImage flattenedImage;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *layers; // ivar: _layers
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) id *radiosityImage; // ivar: _radiosityImage
@property (nonatomic) CGSize radiosityImageScale; // ivar: _radiosityImageScale
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (nonatomic) CGSize size; // ivar: _size
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)dealloc;


@end


#endif