// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PXFLEXMUSICCUEREQUEST_H
#define _PXFLEXMUSICCUEREQUEST_H


#import <Foundation/Foundation.h>

#import "PXFlexMusicAsset.h"

@interface _PXFlexMusicCueRequest : NSObject

@property (readonly, nonatomic) PXFlexMusicAsset *asset; // ivar: _asset
@property (readonly, copy, nonatomic) id *resultHandler; // ivar: _resultHandler


-(id)init;
-(id)initWithAsset:(id)arg0 resultHandler:(id)arg1 ;


@end


#endif