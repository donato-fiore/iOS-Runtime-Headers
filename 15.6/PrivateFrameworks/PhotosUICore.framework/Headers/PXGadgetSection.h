// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGADGETSECTION_H
#define PXGADGETSECTION_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "PXGadgetSpec.h"
#import "PXGadgetSectionHeader.h"

@interface PXGadgetSection : NSObject {
    NSInteger _changeCount;
}


@property (retain, nonatomic) PXGadgetSpec *gadgetSpec; // ivar: _gadgetSpec
@property (readonly, nonatomic) NSArray *gadgets; // ivar: _gadgets
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) PXGadgetSectionHeader *sectionHeader; // ivar: _sectionHeader


-(id)description;
-(id)init;
-(id)initWithIdentifier:(id)arg0 gadgets:(id)arg1 ;


@end


#endif