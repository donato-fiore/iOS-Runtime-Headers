// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDAUDIOSTREAMINTERFACEDATASOURCE_H
#define HMDAUDIOSTREAMINTERFACEDATASOURCE_H

@class HMFObject, NSString;
@protocol HMDAudioStreamInterfaceDataSource;



@interface HMDAudioStreamInterfaceDataSource : HMFObject <HMDAudioStreamInterfaceDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (getter=isMuted) BOOL muted;
@property (readonly) Class superclass;


-(void)setAudioSessionPropertiesWithShouldAllowSystemSounds:(BOOL)arg0 ;


@end


#endif