// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUDISPLAY_IOS_H
#define NUDISPLAY_IOS_H

@class NSString, CADisplay;
@protocol NUDisplay;

#import <Foundation/Foundation.h>

#import "NUColorSpace.h"
#import "NUPixelFormat.h"

@interface NUDisplay_iOS : NSObject <NUDisplay>



@property (readonly) NUColorSpace *colorSpace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CADisplay *display; // ivar: _display
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) id *identifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly) NUPixelFormat *pixelFormat;
@property (readonly, nonatomic) ? size;
@property (readonly) Class superclass;


+(id)mainDisplay;
-(BOOL)wideColor;
-(id)init;
-(id)initWithCADisplay:(id)arg0 ;


@end


#endif