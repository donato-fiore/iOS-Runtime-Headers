// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUFULLEXTENTREGIONPOLICY_H
#define NUFULLEXTENTREGIONPOLICY_H

@class NSString;
@protocol NURegionPolicy;

#import <Foundation/Foundation.h>


@interface NUFullExtentRegionPolicy : NSObject <NURegionPolicy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)regionForGeometry:(id)arg0 ;


@end


#endif