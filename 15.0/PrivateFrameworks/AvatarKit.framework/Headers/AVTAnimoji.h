// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTANIMOJI_H
#define AVTANIMOJI_H

@class NSURL, SCNNode, NSDictionary, NSString;


#import "AVTAvatar.h"

@interface AVTAnimoji : AVTAvatar {
    NSURL *_url;
    SCNNode *_lightingNode;
    SCNNode *_headNode;
    SCNNode *_avatarNode;
    SCNNode *_cameraNode;
    NSDictionary *_specializationSettings;
}


@property (readonly, nonatomic) SCNNode *cameraNode;
@property (readonly, nonatomic) SCNNode *lightingNode;
@property (readonly, nonatomic) NSString *name; // ivar: _name


+(id)_scenePathForPuppetNamed:(id)arg0 ;
+(id)_sceneURLForPuppetDirectoryURL:(id)arg0 ;
+(id)animojiNamed:(id)arg0 ;
+(id)animojiNames;
+(id)animojiWithContentsOfURL:(id)arg0 ;
+(id)puppetNamed:(id)arg0 options:(id)arg1 ;
+(id)puppetNames;
+(id)thumbnailForAnimojiNamed:(id)arg0 options:(id)arg1 ;
+(id)thumbnailForPuppetNamed:(id)arg0 options:(id)arg1 ;
+(void)preloadAnimojiNamed:(id)arg0 ;
+(void)preloadPuppet:(id)arg0 ;
+(void)preloadPuppetNamed:(id)arg0 ;
-(NSUInteger)usageIntent;
-(id)_sceneURL;
-(id)avatarNode;
-(id)copyWithUsageIntent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)headNode;
-(id)initWithDescriptor:(id)arg0 usageIntent:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithName:(id)arg0 error:(*id)arg1 ;
-(id)newDescriptor;
-(id)puppetState;
-(id)specializationSettings;
-(id)stickerPhysicsStateIdentifier;
-(id)url;
-(void)_load;
-(void)configureForBestAnimationQuality;
-(void)loadIfNeeded;
-(void)setPuppetState:(id)arg0 ;
-(void)setUrl:(id)arg0 ;
-(void)update;


@end


#endif