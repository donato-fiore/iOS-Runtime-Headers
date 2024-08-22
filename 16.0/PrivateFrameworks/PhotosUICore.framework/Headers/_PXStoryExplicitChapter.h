// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXSTORYEXPLICITCHAPTER_H
#define _PXSTORYEXPLICITCHAPTER_H

@class NSString, NSSet;
@protocol PXStoryChapter, PXStoryMutableChapter, NSCopying;

#import <Foundation/Foundation.h>


@interface _PXStoryExplicitChapter : NSObject <PXStoryChapter, PXStoryMutableChapter>

 {
    NSString *_localizedTitle;
    NSString *_localizedSubtitle;
}


@property (readonly, nonatomic) NSSet *assetUUIDs; // ivar: _assetUUIDs
@property (readonly, nonatomic) NSString *diagnosticDescription;
@property (readonly, nonatomic) NSString *firstAssetUUID; // ivar: _firstAssetUUID
@property (readonly, nonatomic) NSObject<NSCopying> *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) NSString *localizedTitle;


-(id)initWithFirstAssetUUID:(id)arg0 assetUUIDs:(id)arg1 ;


@end


#endif