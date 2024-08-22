// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBNULLDEVICE_H
#define RBNULLDEVICE_H

@class NSString;
@protocol RBImageRenderer;

#import <Foundation/Foundation.h>


@interface RBNullDevice : NSObject <RBImageRenderer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedDevice;
-(struct CGImage *)renderImageInRect:(struct CGRect )arg0 options:(id)arg1 renderer:(id)arg2 ;
// -(void)renderImageInRect:(struct CGRect )arg0 options:(id)arg1 renderer:(id)arg2 completionQueue:(unk)arg3 handler:(id)arg4  ;


@end


#endif