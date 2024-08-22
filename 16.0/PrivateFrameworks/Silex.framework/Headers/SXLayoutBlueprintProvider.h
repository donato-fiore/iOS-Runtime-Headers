// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXLAYOUTBLUEPRINTPROVIDER_H
#define SXLAYOUTBLUEPRINTPROVIDER_H

@class NSString;
@protocol SXLayoutBlueprintProvider;

#import <Foundation/Foundation.h>

#import "SXLayoutBlueprint.h"

@interface SXLayoutBlueprintProvider : NSObject <SXLayoutBlueprintProvider>



@property (retain, nonatomic) SXLayoutBlueprint *blueprint; // ivar: blueprint
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)updateBlueprint:(id)arg0 ;


@end


#endif