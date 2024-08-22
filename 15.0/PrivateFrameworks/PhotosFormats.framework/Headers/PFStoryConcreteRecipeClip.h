// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFSTORYCONCRETERECIPECLIP_H
#define PFSTORYCONCRETERECIPECLIP_H

@class NSString;
@protocol PFStoryRecipeClip;

#import <Foundation/Foundation.h>


@interface PFStoryConcreteRecipeClip : NSObject <PFStoryRecipeClip>



@property (readonly, nonatomic) NSString *assetIdentifier; // ivar: _assetIdentifier
@property (readonly, nonatomic) NSString *diagnosticDescription;
@property (readonly, nonatomic) ? idealDuration; // ivar: _idealDuration
@property (readonly, nonatomic) ? maximumDuration; // ivar: _maximumDuration
@property (readonly, nonatomic) ? minimumDuration; // ivar: _minimumDuration
@property (readonly, nonatomic) NSInteger motionStyle; // ivar: _motionStyle
@property (readonly, nonatomic) NSInteger playbackStyle; // ivar: _playbackStyle
@property (readonly, nonatomic) NSInteger transition; // ivar: _transition
@property (readonly, nonatomic) ? videoCueOffset; // ivar: _videoCueOffset


-(BOOL)isEqualToClip:(id)arg0 ;
-(id)initWithAssetIdentifier:(id)arg0 playbackStyle:(NSInteger)arg1 minimumDuration:(struct ? )arg2 idealDuration:(struct ? )arg3 maximumDuration:(struct ? )arg4 videoCueOffset:(struct ? )arg5 motionStyle:(NSInteger)arg6 transition:(NSInteger)arg7 ;


@end


#endif