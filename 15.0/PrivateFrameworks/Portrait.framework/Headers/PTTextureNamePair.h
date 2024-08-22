// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PTTEXTURENAMEPAIR_H
#define PTTEXTURENAMEPAIR_H

@class NSString;
@protocol MTLTexture;

#import <Foundation/Foundation.h>


@interface PTTextureNamePair : NSObject

@property *__IOSurface iosurface; // ivar: _iosurface
@property (retain) NSString *name; // ivar: _name
@property (retain) NSObject<MTLTexture> *texture; // ivar: _texture


+(id)createWithName:(id)arg0 texture:(id)arg1 ;


@end


#endif