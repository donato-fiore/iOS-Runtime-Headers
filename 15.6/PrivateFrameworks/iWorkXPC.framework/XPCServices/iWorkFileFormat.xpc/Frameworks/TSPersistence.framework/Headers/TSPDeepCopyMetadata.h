// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPDEEPCOPYMETADATA_H
#define TSPDEEPCOPYMETADATA_H

@class NSDictionary;


#import "TSPObject.h"
#import "TSPComponentObjectUUIDMap.h"

@interface TSPDeepCopyMetadata : TSPObject

@property (readonly, nonatomic) NSDictionary *cachedDataMap; // ivar: _cachedDataMap
@property (readonly, nonatomic) TSPComponentObjectUUIDMap *componentObjectUUIDMap; // ivar: _componentObjectUUIDMap
@property (readonly, nonatomic) NSUInteger readVersion; // ivar: _readVersion
@property (readonly, nonatomic) NSInteger rootObjectIdentifier; // ivar: _rootObjectIdentifier
@property (readonly, nonatomic) NSUInteger version; // ivar: _version


-(id)initWithContext:(id)arg0 ;
-(id)initWithRootObject:(id)arg0 version:(NSUInteger)arg1 readVersion:(NSUInteger)arg2 componentObjectUUIDMap:(id)arg3 cachedDataMap:(id)arg4 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif