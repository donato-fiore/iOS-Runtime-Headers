// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8ROOMPLAN17OBJECTKITKEYFRAME_H
#define _TTC8ROOMPLAN17OBJECTKITKEYFRAME_H

@class NSUUID;
@protocol OUKeyframe;

#import <Foundation/Foundation.h>


@interface _TtC8RoomPlan17ObjectKitKeyframe : NSObject <OUKeyframe>

 {
    ? identifier;
    ? points;
    ? pointsToWorld;
    ? semanticLabels;
    ? semanticVotes;
    ? colors;
    ? coreKeyframe;
}


@property (nonatomic) ? cameraPose; // ivar: cameraPose
@property ? colors;
@property (nonatomic) NSInteger count; // ivar: count
@property (nonatomic, copy) NSUUID *identifier;
@property ? points;
@property ? pointsToWorld;
@property ? semanticLabels;
@property ? semanticVotes;
@property (nonatomic) CGFloat timestamp; // ivar: timestamp


-(id)copyWithZone:(*void)arg0 ;


@end


#endif