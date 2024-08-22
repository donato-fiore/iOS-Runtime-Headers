// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVPLAYBACKSPEEDCOLLECTION_H
#define AVPLAYBACKSPEEDCOLLECTION_H

@class NSArray;
@protocol AVPlaybackSpeedCollectionDelegate;

#import <Foundation/Foundation.h>

#import "AVPlaybackSpeed.h"

@interface AVPlaybackSpeedCollection : NSObject {
    id<AVPlaybackSpeedCollectionDelegate> *_delegate;
    NSArray *_speeds;
    AVPlaybackSpeed *_activeSpeed;
}


@property (readonly, nonatomic) AVPlaybackSpeed *selectedSpeed;
@property (readonly, nonatomic) NSArray *speeds;


+(id)collectionWithSpeeds:(id)arg0 ;
+(id)defaultSpeedFromList:(id)arg0 ;
+(id)keyPathsForValuesAffectingDisplaySpeeds;
+(id)keyPathsForValuesAffectingSelectedSpeed;
-(id)_initInternalWithSpeeds:(id)arg0 ;
-(id)activeSpeed;
-(id)debugDescription;
-(id)delegate;
-(id)description;
-(id)displaySpeeds;
-(id)internalDescription;
-(void)selectNextPlaybackSpeed:(id)arg0 ;
-(void)selectSpeed:(id)arg0 ;
-(void)setActiveSpeed:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif