// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIACTIVITYITEMCUSTOMIZATIONGROUP_H
#define _UIACTIVITYITEMCUSTOMIZATIONGROUP_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface _UIActivityItemCustomizationGroup : NSObject

@property (readonly, copy, nonatomic) NSArray *customizations; // ivar: _customizations
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


-(id)_initGroupWithName:(id)arg0 identifier:(id)arg1 customizations:(id)arg2 ;


@end


#endif