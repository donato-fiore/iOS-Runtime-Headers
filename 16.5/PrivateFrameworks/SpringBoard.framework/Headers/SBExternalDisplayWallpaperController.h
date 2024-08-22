// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBEXTERNALDISPLAYWALLPAPERCONTROLLER_H
#define SBEXTERNALDISPLAYWALLPAPERCONTROLLER_H

@class NSString, SBFWindow, SBFZStackParticipant;
@protocol SBFZStackParticipantDelegate;

#import <Foundation/Foundation.h>


@interface SBExternalDisplayWallpaperController : NSObject <SBFZStackParticipantDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) SBFWindow *window; // ivar: _window
@property (retain, nonatomic) SBFZStackParticipant *zStackParticipant; // ivar: _zStackParticipant


-(id)initWithWindowScene:(id)arg0 ;
-(void)zStackParticipant:(id)arg0 updatePreferences:(id)arg1 ;
-(void)zStackParticipantDidChange:(id)arg0 ;


@end


#endif