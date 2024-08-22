// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGFOCUSGUIDEVIEWCONFIGURATION_H
#define PXGFOCUSGUIDEVIEWCONFIGURATION_H

@class NSString, NSArray;
@protocol PXGViewUserData;

#import <Foundation/Foundation.h>


@interface PXGFocusGuideViewConfiguration : NSObject <PXGViewUserData>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *preferredFocusEnvironments; // ivar: _preferredFocusEnvironments
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif