// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUVIEWPORTREGIONPOLICY_H
#define NUVIEWPORTREGIONPOLICY_H

@class NSString;
@protocol NURegionPolicy;

#import <Foundation/Foundation.h>

#import "NUViewport.h"

@interface NUViewportRegionPolicy : NSObject <NURegionPolicy>

 {
    NUViewport *_viewport;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithViewport:(id)arg0 ;
-(id)regionForGeometry:(id)arg0 ;


@end


#endif