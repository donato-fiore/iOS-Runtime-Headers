// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCONTROLCENTERSYSTEMAGENT_H
#define SBCONTROLCENTERSYSTEMAGENT_H

@class NSString;
@protocol CCUIControlCenterSystemAgent;

#import <Foundation/Foundation.h>


@interface SBControlCenterSystemAgent : NSObject <CCUIControlCenterSystemAgent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isOrientationLocked;
-(BOOL)isRingerMuted;
-(BOOL)isUILocked;
-(void)lockOrientation;
-(void)setRingerMuted:(BOOL)arg0 ;
-(void)unlockOrientation;


@end


#endif