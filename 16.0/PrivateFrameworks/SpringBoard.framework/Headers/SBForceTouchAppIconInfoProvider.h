// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFORCETOUCHAPPICONINFOPROVIDER_H
#define SBFORCETOUCHAPPICONINFOPROVIDER_H

@class NSString;
@protocol SBIconAccessoryInfoProvider;

#import <Foundation/Foundation.h>


@interface SBForceTouchAppIconInfoProvider : NSObject <SBIconAccessoryInfoProvider>



@property (readonly, nonatomic) NSInteger continuityBadgeType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly, copy, nonatomic) NSString *location;
@property (readonly) Class superclass;




@end


#endif