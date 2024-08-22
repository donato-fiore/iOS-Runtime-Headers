// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKPLACEACTIONENVIRONMENT_H
#define MKPLACEACTIONENVIRONMENT_H

@class GEOAPPlaceCardModule, UIView;

#import <Foundation/Foundation.h>


@interface MKPlaceActionEnvironment : NSObject

@property (retain, nonatomic) GEOAPPlaceCardModule *analyticsModuleMetadata; // ivar: _analyticsModuleMetadata
@property (nonatomic) BOOL isQuickAction; // ivar: _isQuickAction
@property (retain, nonatomic) UIView *sourceView; // ivar: _sourceView




@end


#endif