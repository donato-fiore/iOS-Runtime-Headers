// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXMHAPTICOUTPUTACTION_H
#define AXMHAPTICOUTPUTACTION_H

@class NSURL;


#import "AXMOutputAction.h"

@interface AXMHapticOutputAction : AXMOutputAction {
    NSURL *_hapticFileURL;
}


@property (readonly, nonatomic) NSURL *hapticFileURL;
@property (nonatomic) CGFloat hapticIntensity; // ivar: _hapticIntensity


-(id)_initWithURL:(id)arg0 handle:(id)arg1 ;
-(id)initWithURL:(id)arg0 ;


@end


#endif