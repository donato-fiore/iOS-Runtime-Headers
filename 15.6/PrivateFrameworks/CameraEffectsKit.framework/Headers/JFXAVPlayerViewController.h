// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JFXAVPLAYERVIEWCONTROLLER_H
#define JFXAVPLAYERVIEWCONTROLLER_H

@class AVPlayerViewController, NSString, AVPlayer;
@protocol JFXAVPlayerViewer;



@interface JFXAVPlayerViewController : AVPlayerViewController <JFXAVPlayerViewer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGSize displaySize;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AVPlayer *player;
@property (readonly, nonatomic, getter=isReadyForDisplay) BOOL readyForDisplay;
@property (nonatomic) BOOL showAVControls; // ivar: showAVControls
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGRect videoBounds;
@property (copy, nonatomic) NSString *videoGravity;


-(void)configureDisplayAttributesForColorSpace:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif