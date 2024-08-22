// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLPHOTOSDEFAULTS_H
#define PLPHOTOSDEFAULTS_H

@class MPMediaItemCollection;

#import <Foundation/Foundation.h>


@interface PLPhotosDefaults : NSObject {
    BOOL _shouldPlayMusic;
    BOOL _summarizeMomentSections;
    int _transition;
    MPMediaItemCollection *_musicCollection;
}




+(id)sharedInstance;
+(int)randomTransition;
-(BOOL)shouldPlayMusic;
-(BOOL)summarizeMomentSections;
-(id)init;
-(id)musicCollection;
-(int)transition;
-(int)transitionForAnimationMovingForward:(BOOL)arg0 ;
-(void)_reloadPhotoDefaultValuesAndNotify:(BOOL)arg0 ;
-(void)dealloc;
-(void)reloadPhotoDefaultValues;
-(void)setMusicCollection:(id)arg0 ;
-(void)setShouldPlayMusic:(BOOL)arg0 ;
-(void)setTransition:(int)arg0 ;


@end


#endif