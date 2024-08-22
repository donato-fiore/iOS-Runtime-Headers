// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASESESSIONVOLUMEIMPL_H
#define PHASESESSIONVOLUMEIMPL_H

@class NSString;
@protocol PHASESessionVolumeInterface;

#import <Foundation/Foundation.h>


@interface PHASESessionVolumeImpl : NSObject <PHASESessionVolumeInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)registerVolumeChangedNotificationBlock:(id)arg0 ;
-(id)volumeForCommand:(id)arg0 ;
-(id)volumeForCommandFromCallback:(id)arg0 ;


@end


#endif