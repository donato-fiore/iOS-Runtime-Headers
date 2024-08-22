// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEFEEDNAVIMAGEASSETHANDLE_H
#define NEFEEDNAVIMAGEASSETHANDLE_H


#import <Foundation/Foundation.h>


@interface NEFeedNavImageAssetHandle : NSObject {
    ? filePath;
    ? fallbackImage;
    ? uniqueKey;
    ? feedNavImageSize;
    ? tag;
    ? feedNavImageStyler;
    ? scale;
}




-(id)init;
-(id)initWithIdentifier:(id)arg0 feedNavImage:(id)arg1 feedNavImageSize:(struct CGSize )arg2 feedNavImageStyler:(id)arg3 scale:(CGFloat)arg4 ;
-(id)initWithTag:(id)arg0 feedNavImageSize:(struct CGSize )arg1 feedNavImageStyler:(id)arg2 scale:(CGFloat)arg3 ;


@end


#endif