// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFCOLLABORATIONUSERDEFAULTS_H
#define SFCOLLABORATIONUSERDEFAULTS_H


#import <Foundation/Foundation.h>


@interface SFCollaborationUserDefaults : NSObject



+(id)sharedDefaults;
-(id)existingCollaborativeModeForContentIdentifier:(id)arg0 ;
-(void)setCollaborativeMode:(BOOL)arg0 contentIdentifier:(id)arg1 ;


@end


#endif