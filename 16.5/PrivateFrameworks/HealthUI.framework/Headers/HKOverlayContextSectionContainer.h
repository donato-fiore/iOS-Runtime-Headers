// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKOVERLAYCONTEXTSECTIONCONTAINER_H
#define HKOVERLAYCONTEXTSECTIONCONTAINER_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "HKDisplayType.h"

@interface HKOverlayContextSectionContainer : NSObject

@property (readonly, nonatomic) NSString *localizedContainerTitle; // ivar: _localizedContainerTitle
@property (readonly, nonatomic) NSArray *overlayContextSections; // ivar: _overlayContextSections
@property (readonly, nonatomic) HKDisplayType *primaryDisplayType; // ivar: _primaryDisplayType


-(id)initWithContainerTitle:(id)arg0 overlayContextSections:(id)arg1 ;
-(id)initWithContainerTitle:(id)arg0 overlayContextSections:(id)arg1 primaryDisplayType:(id)arg2 ;


@end


#endif