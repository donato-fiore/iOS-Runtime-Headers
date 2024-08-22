// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PROJECTCHANGELOG_H
#define PROJECTCHANGELOG_H

@class NSString, NSMutableArray, NSMutableSet, NSMutableDictionary, NSSet, PVEffect;

#import <Foundation/Foundation.h>

#import "Project.h"

@interface ProjectChangeLog : NSObject {
    Project *m_project;
    NSString *m_themeID;
    NSMutableArray *m_editList;
    NSMutableArray *m_backgroundAudioClips;
    NSMutableArray *m_foregroundAudioClips;
    NSMutableArray *m_cutaways;
    NSMutableSet *m_clipsNeedingDisplay;
    NSMutableSet *m_capturedClips;
    NSMutableArray *m_clipChangeLogs;
    BOOL m_useThemeAudio;
    BOOL m_fadeInFromBlack;
    BOOL m_fadeOutToBlack;
    NSString *m_audioTimePitchAlgorithm;
    NSMutableDictionary *m_trailerDict;
}


@property (readonly, nonatomic) NSSet *capturedClips;
@property (readonly, nonatomic) NSSet *clipsNeedingDisplay;
@property (copy, nonatomic) PVEffect *filterEffect; // ivar: _filterEffect
@property (readonly, nonatomic) BOOL hasChanges;


-(id)description;
-(id)initWithProject:(id)arg0 ;
-(id)redoProjectChangeLog;
-(id)restoreProject;
-(void)captureClip:(id)arg0 needsDisplay:(BOOL)arg1 ;
-(void)captureProject:(id)arg0 ;
-(void)dealloc;


@end


#endif