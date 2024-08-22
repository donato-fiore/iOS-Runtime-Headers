// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGINCOMPLETELOCATIONRESOLVER_H
#define PGINCOMPLETELOCATIONRESOLVER_H

@class NSSet, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "PGGraphLocationHelper.h"

@interface PGIncompleteLocationResolver : NSObject {
    PGGraphLocationHelper *_locationHelper;
}


@property (retain, nonatomic) NSSet *addressNodes; // ivar: _addressNodes
@property (retain, nonatomic) NSMutableDictionary *resolvedLocationNodesCache; // ivar: _resolvedLocationNodesCache


+(CGFloat)_maxDistanceForDimension:(NSUInteger)arg0 ;
-(id)_resolveIdentifierForIncompleteAddressNode:(id)arg0 withTargetDimension:(NSUInteger)arg1 ;
-(id)_resolvedAddressForIncompleteAddress:(id)arg0 withTargetDimension:(NSUInteger)arg1 resolvedDimension:(*NSUInteger)arg2 resolvedLocation:(*id)arg3 addresses:(id)arg4 ;
-(id)_resolvedAddressForIncompleteAddress:(id)arg0 withTargetDimension:(NSUInteger)arg1 resolvedDimension:(*NSUInteger)arg2 resolvedLocation:(*id)arg3 sortedAddresses:(id)arg4 ;
-(id)_resolvedLocationNodeForIncompleteAddressNode:(id)arg0 withTargetDimension:(NSUInteger)arg1 resolvedDimension:(*NSUInteger)arg2 continueResolvingHigherDimensions:(BOOL)arg3 ;
-(id)initWithAddressNodes:(id)arg0 locationHelper:(id)arg1 ;
-(id)resolvedLocationNodeForIncompleteAddressNode:(id)arg0 withPreferredTargetDimension:(NSUInteger)arg1 resolvedDimension:(*NSUInteger)arg2 ;
-(id)resolvedLocationNodeForIncompleteAddressNode:(id)arg0 withTargetDimension:(NSUInteger)arg1 ;


@end


#endif