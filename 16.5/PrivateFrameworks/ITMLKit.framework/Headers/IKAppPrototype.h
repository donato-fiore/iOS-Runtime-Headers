// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKAPPPROTOTYPE_H
#define IKAPPPROTOTYPE_H

@class NSMutableIndexSet, NSDictionary, NSIndexSet;

#import <Foundation/Foundation.h>

#import "IKAppPrototypeIdentifier.h"
#import "IKDOMPrototype.h"

@interface IKAppPrototype : NSObject {
    NSMutableIndexSet *_usageIndexes;
}


@property (readonly, copy, nonatomic) NSDictionary *groupingValues; // ivar: _groupingValues
@property (readonly, nonatomic) IKAppPrototypeIdentifier *identifier; // ivar: _identifier
@property (readonly, weak, nonatomic) IKDOMPrototype *prototype; // ivar: _prototype
@property (readonly, copy, nonatomic) NSIndexSet *usageIndexes;


-(id)_sparseObjectFromObject:(id)arg0 usingPropertyPaths:(id)arg1 ;
-(id)dsepm_viewElement;
-(id)initWithPrototype:(id)arg0 dataItem:(id)arg1 ;
-(void)addUsageForIndex:(NSInteger)arg0 ;
-(void)dsepm_setViewElement:(id)arg0 ;
-(void)removeUsageForIndex:(NSInteger)arg0 ;
-(void)updateUsageIndexesWithChangeSet:(id)arg0 ;


@end


#endif