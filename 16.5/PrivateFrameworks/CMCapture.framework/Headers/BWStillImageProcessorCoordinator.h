// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWSTILLIMAGEPROCESSORCOORDINATOR_H
#define BWSTILLIMAGEPROCESSORCOORDINATOR_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface BWStillImageProcessorCoordinator : NSObject {
    NSDictionary *_processorControllersByType;
}




-(id)controllerForType:(NSUInteger)arg0 ;
-(id)initWithProcessorControllers:(id)arg0 ;
-(id)processorControllerNames;
-(void)dealloc;


@end


#endif