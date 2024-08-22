// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _AFLOCATIONSNAPSHOTMUTATION_H
#define _AFLOCATIONSNAPSHOTMUTATION_H

@class NSNumber, NSString;
@protocol AFLocationSnapshotMutating;

#import <Foundation/Foundation.h>

#import "AFLocationSnapshot.h"

@interface _AFLocationSnapshotMutation : NSObject <AFLocationSnapshotMutating>

 {
    AFLocationSnapshot *_base;
    NSNumber *_latitude;
    NSNumber *_longitude;
    NSNumber *_altitude;
    NSNumber *_direction;
    NSNumber *_speed;
    NSNumber *_verticalAccuracy;
    NSNumber *_horizontalAccuracy;
    BOOL _preciseLocationEnabled;
    NSInteger _accessState;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)getPreciseLocationEnabled;
-(BOOL)isDirty;
-(NSInteger)getAccessState;
-(id)getAltitude;
-(id)getDirection;
-(id)getHorizontalAccuracy;
-(id)getLatitude;
-(id)getLongitude;
-(id)getSpeed;
-(id)getVerticalAccuracy;
-(id)initWithBase:(id)arg0 ;
-(void)setAccessState:(NSInteger)arg0 ;
-(void)setAltitude:(id)arg0 ;
-(void)setDirection:(id)arg0 ;
-(void)setHorizontalAccuracy:(id)arg0 ;
-(void)setLatitude:(id)arg0 ;
-(void)setLongitude:(id)arg0 ;
-(void)setPreciseLocationEnabled:(BOOL)arg0 ;
-(void)setSpeed:(id)arg0 ;
-(void)setVerticalAccuracy:(id)arg0 ;


@end


#endif