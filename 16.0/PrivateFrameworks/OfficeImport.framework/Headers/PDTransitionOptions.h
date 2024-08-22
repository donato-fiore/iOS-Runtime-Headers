// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDTRANSITIONOPTIONS_H
#define PDTRANSITIONOPTIONS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PDTransitionOptions : NSObject {
    BOOL mHasSound;
    BOOL mIsStartSoundAction;
    NSString *mSoundFile;
}




-(id)description;


@end


#endif