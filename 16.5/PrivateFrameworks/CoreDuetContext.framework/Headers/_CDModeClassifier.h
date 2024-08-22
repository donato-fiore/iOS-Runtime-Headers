// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CDMODECLASSIFIER_H
#define _CDMODECLASSIFIER_H

@class ATXModeClassifier;

#import <Foundation/Foundation.h>


@interface _CDModeClassifier : NSObject

@property (retain) ATXModeClassifier *modeClassifier; // ivar: _modeClassifier


-(id)init;
-(void)_enableFocusModesIfPossible;


@end


#endif