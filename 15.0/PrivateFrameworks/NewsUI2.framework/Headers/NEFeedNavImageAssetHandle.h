// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEFEEDNAVIMAGEASSETHANDLE_H
#define NEFEEDNAVIMAGEASSETHANDLE_H

@class UIImage, NSString;

#import <Foundation/Foundation.h>


@interface NEFeedNavImageAssetHandle : NSObject {
    ? filePath;
    ? uniqueKey;
    ? feedNavImageSize;
    ? tag;
    ? feedNavImageStyler;
}


@property (nonatomic, retain) UIImage *fallbackImage; // ivar: fallbackImage
@property (nonatomic, copy) NSString *filePath;
@property (nonatomic, readonly) NSString *uniqueKey;


-(id)init;
-(id)initWithIdentifier:(id)arg0 feedNavImage:(id)arg1 feedNavImageSize:(struct CGSize )arg2 feedNavImageStyler:(id)arg3 ;
-(id)initWithTag:(id)arg0 feedNavImageSize:(struct CGSize )arg1 feedNavImageStyler:(id)arg2 ;
-(void)downloadWithGroup:(id)arg0 ;


@end


#endif