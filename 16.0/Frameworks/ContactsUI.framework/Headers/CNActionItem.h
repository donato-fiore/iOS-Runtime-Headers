// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNACTIONITEM_H
#define CNACTIONITEM_H

@class UIImage, NSString;

#import <Foundation/Foundation.h>


@interface CNActionItem : NSObject

@property (nonatomic) BOOL disabled; // ivar: _disabled
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSString *type; // ivar: _type


-(id)description;
-(id)initWithImage:(id)arg0 type:(id)arg1 ;


@end


#endif