// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKVIDEOASSET_H
#define WLKVIDEOASSET_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WLKVideoAsset : NSObject

@property (readonly, copy, nonatomic) NSString *URL; // ivar: _URL
@property (readonly, copy, nonatomic) NSString *assetID; // ivar: _assetID
@property (readonly, copy, nonatomic) NSString *programID; // ivar: _programID


-(id)initWithDictionary:(id)arg0 ;


@end


#endif