// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTAVATARBODYPOSE_H
#define AVTAVATARBODYPOSE_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface AVTAvatarBodyPose : NSObject {
    NSDictionary *_dictionaryRepresentation;
}


@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;


+(id)neutralPose;
+(id)posesInPosePack:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithHierarchy:(id)arg0 ;
-(id)initWithRootJoints:(id)arg0 ;
-(id)initWithSceneAtURL:(id)arg0 ;
-(void)enumerateJointsForVariant:(id)arg0 intensity:(float)arg1 usingBlock:(id)arg2 ;


@end


#endif