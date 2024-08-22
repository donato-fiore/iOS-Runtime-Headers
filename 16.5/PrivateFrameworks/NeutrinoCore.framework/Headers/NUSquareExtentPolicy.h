// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUSQUAREEXTENTPOLICY_H
#define NUSQUAREEXTENTPOLICY_H

@class NSString;
@protocol NUExtentPolicy;

#import <Foundation/Foundation.h>


@interface NUSquareExtentPolicy : NSObject <NUExtentPolicy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(struct ? )extentForImageExtent:(struct ? )arg0 ;


@end


#endif