// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISEARCHTOKEN_H
#define UISEARCHTOKEN_H

@class NSString;

#import <Foundation/Foundation.h>

#import "UIImage.h"

@interface UISearchToken : NSObject

@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) id *representedObject; // ivar: _representedObject
@property (copy, nonatomic) NSString *text; // ivar: _text


+(id)tokenWithIcon:(id)arg0 text:(id)arg1 ;
+(id)tokenWithImage:(id)arg0 ;
-(id)_initToken;


@end


#endif