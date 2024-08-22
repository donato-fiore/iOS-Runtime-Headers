// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTCHANNELDESCRIPTOR_H
#define PTCHANNELDESCRIPTOR_H

@class UIImage, NSURL, NSString;

#import <Foundation/Foundation.h>


@interface PTChannelDescriptor : NSObject

@property (readonly, copy, nonatomic) UIImage *image; // ivar: _image
@property (readonly, copy, nonatomic) NSURL *imageFileURL; // ivar: _imageFileURL
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


-(id)initWithName:(id)arg0 image:(id)arg1 ;


@end


#endif