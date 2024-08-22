// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUEDITABLEMEDIAPROVIDER_H
#define PUEDITABLEMEDIAPROVIDER_H



#import "PUMediaProvider.h"

@interface PUEditableMediaProvider : PUMediaProvider



-(int)requestAVAssetForVideo:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(int)requestAsynchronousVideoURLForAsset:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;


@end


#endif