// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSTRANSLATIONERRORCONTROLLER_H
#define WBSTRANSLATIONERRORCONTROLLER_H

@class NSCountedSet, NSMutableSet;
@protocol WBSTranslationErrorControllerDelegate;

#import <Foundation/Foundation.h>


@interface WBSTranslationErrorController : NSObject {
    NSCountedSet *_errorCounter;
    NSMutableSet *_errorKeysReachingThreshold;
}


@property (weak, nonatomic) NSObject<WBSTranslationErrorControllerDelegate> *delegate; // ivar: _delegate


-(id)_overriddenThresholdForError:(id)arg0 ;
-(id)init;
-(void)addError:(id)arg0 ;
-(void)invalidate;


@end


#endif