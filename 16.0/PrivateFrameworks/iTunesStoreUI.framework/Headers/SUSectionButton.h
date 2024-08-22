// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUSECTIONBUTTON_H
#define SUSECTIONBUTTON_H

@class NSString, UIImage, NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SUSectionButton : NSObject <NSCopying>



@property (copy, nonatomic) NSString *accessibilityTitle; // ivar: _accessibilityTitle
@property (copy, nonatomic) NSString *displayTitle; // ivar: _displayTitle
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) UIEdgeInsets imageInsets; // ivar: _imageInsets
@property (copy, nonatomic) NSURL *imageURL; // ivar: _imageURL
@property (nonatomic) float imageURLScale; // ivar: _imageURLScale
@property (nonatomic) NSInteger tag; // ivar: _tag


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSectionButtonDictionary:(id)arg0 ;
-(void)applyToBarButtonItem:(id)arg0 ;
-(void)dealloc;


@end


#endif