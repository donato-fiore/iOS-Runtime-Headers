// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MDLASSETLOADER_H
#define MDLASSETLOADER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MDLAssetLoader : NSObject {
    NSString *_extension;
}




-(id)initWithExtension:(id)arg0 ;
-(id)loadURL:(id)arg0 ;


@end


#endif