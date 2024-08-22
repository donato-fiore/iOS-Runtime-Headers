// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCMMSENDBACKSUGGESTION_H
#define PXCMMSENDBACKSUGGESTION_H

@class PHAssetCollection, NSSet, NSArray;

#import <Foundation/Foundation.h>


@interface PXCMMSendBackSuggestion : NSObject

@property (readonly, nonatomic) PHAssetCollection *assetCollection; // ivar: _assetCollection
@property (readonly, nonatomic) NSSet *participants; // ivar: _participants
@property (readonly, nonatomic) NSArray *recipients; // ivar: _recipients


+(id)new;
-(id)init;
-(id)initWithAssetCollection:(id)arg0 participants:(id)arg1 ;


@end


#endif