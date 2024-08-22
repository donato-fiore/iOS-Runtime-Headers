// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDISPLAYPORTALMANAGER_H
#define SBDISPLAYPORTALMANAGER_H

@class NSMapTable;

#import <Foundation/Foundation.h>

#import "SBWindowSceneManager.h"

@interface SBDisplayPortalManager : NSObject {
    NSMapTable *_sourceViewToPortalWindowsMap;
}


@property (readonly, nonatomic) SBWindowSceneManager *windowSceneManager; // ivar: _windowSceneManager


-(id)_createPortalForSourceView:(id)arg0 sourceWindowScene:(id)arg1 targetWindowScene:(id)arg2 traitsRole:(id)arg3 ;
-(id)initWithWindowSceneManager:(id)arg0 ;
-(void)createPortalsForSourceView:(id)arg0 usingTraitsRole:(id)arg1 ;
-(void)destroyPortalsForSourceView:(id)arg0 ;


@end


#endif