// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVPAUDIOSESSION_H
#define TVPAUDIOSESSION_H


#import <Foundation/Foundation.h>


@interface TVPAudioSession : NSObject

@property (copy, nonatomic) id *configurationBlock; // ivar: _configurationBlock


+(id)sharedInstance;
-(id)init;
-(void)_mediaServicesReset:(id)arg0 ;
-(void)_updateIfNecessary;
-(void)dealloc;


@end


#endif