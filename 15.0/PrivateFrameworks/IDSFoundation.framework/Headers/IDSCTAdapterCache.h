// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSCTADAPTERCACHE_H
#define IDSCTADAPTERCACHE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface IDSCTAdapterCache : NSObject

@property (nonatomic) NSUInteger dualSIMEnabled; // ivar: _dualSIMEnabled
@property (nonatomic) NSUInteger isAnySIMInserted; // ivar: _isAnySIMInserted
@property (nonatomic) NSUInteger isAnySIMUsable; // ivar: _isAnySIMUsable
@property (retain, nonatomic) NSArray *sims; // ivar: _sims
@property (nonatomic) NSUInteger supportsIdentification; // ivar: _supportsIdentification


-(id)debugDescription;


@end


#endif