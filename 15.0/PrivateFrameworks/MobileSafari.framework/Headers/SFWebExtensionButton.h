// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFWEBEXTENSIONBUTTON_H
#define SFWEBEXTENSIONBUTTON_H

@class WBSWebExtensionData, UIImage;

#import <Foundation/Foundation.h>


@interface SFWebExtensionButton : NSObject

@property (readonly, nonatomic) BOOL badged; // ivar: _badged
@property (readonly, nonatomic) WBSWebExtensionData *extension; // ivar: _extension
@property (readonly, nonatomic) NSInteger extensionCount; // ivar: _extensionCount
@property (readonly, nonatomic) UIImage *image; // ivar: _image


-(id)initWithExtension:(id)arg0 image:(id)arg1 badged:(BOOL)arg2 ;
-(id)initWithExtensionCount:(NSInteger)arg0 ;


@end


#endif