// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFMEDIAITEMMETADATALOADER_H
#define PFMEDIAITEMMETADATALOADER_H


#import <Foundation/Foundation.h>

#import "MTMediaItemMetadataLoader.h"

@interface PFMediaItemMetadataLoader : NSObject {
    MTMediaItemMetadataLoader *_loader;
}




-(id)init;
-(void)keyIdentifiersFromAsset:(id)arg0 completion:(id)arg1 ;


@end


#endif