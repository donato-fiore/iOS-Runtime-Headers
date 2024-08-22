// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARPOSECONTEXT_H
#define ARPOSECONTEXT_H

@class NSString;
@protocol ARResultDataContext;

#import <Foundation/Foundation.h>


@interface ARPoseContext : NSObject <ARResultDataContext>



@property (nonatomic) NSInteger cameraPosition; // ivar: _cameraPosition
@property (copy, nonatomic) id *cameraTransformCallback; // ivar: _cameraTransformCallback
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)imageData;
-(id)resultDataOfClass:(Class)arg0 ;


@end


#endif