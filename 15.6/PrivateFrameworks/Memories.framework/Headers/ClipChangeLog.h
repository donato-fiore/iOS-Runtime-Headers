// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLIPCHANGELOG_H
#define CLIPCHANGELOG_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "KonaClip.h"

@interface ClipChangeLog : NSObject {
    KonaClip *m_clip;
    NSMutableDictionary *m_capturedClipContents;
}




-(id)description;
-(id)initWithClip:(id)arg0 project:(id)arg1 ;
-(void)dealloc;
-(void)restoreClipInProject:(id)arg0 ;


@end


#endif