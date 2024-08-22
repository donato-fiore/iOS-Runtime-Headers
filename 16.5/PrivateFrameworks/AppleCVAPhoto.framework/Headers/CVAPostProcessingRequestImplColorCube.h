// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CVAPOSTPROCESSINGREQUESTIMPLCOLORCUBE_H
#define CVAPOSTPROCESSINGREQUESTIMPLCOLORCUBE_H

@class NSData, NSString;
@protocol CVAPostProcessingRequest;

#import <Foundation/Foundation.h>


@interface CVAPostProcessingRequestImplColorCube : NSObject <CVAPostProcessingRequest>



@property (retain) NSData *backgroundColorCube; // ivar: _backgroundColorCube
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSData *foregroundColorCube; // ivar: _foregroundColorCube
@property (readonly) NSUInteger hash;
@property BOOL isMono; // ivar: _isMono
@property (retain) NSData *singleColorCube; // ivar: _singleColorCube
@property (readonly) Class superclass;




@end


#endif