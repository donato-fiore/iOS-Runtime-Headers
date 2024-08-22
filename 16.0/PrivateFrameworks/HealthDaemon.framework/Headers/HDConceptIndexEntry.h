// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCONCEPTINDEXENTRY_H
#define HDCONCEPTINDEXENTRY_H

@class NSString, HKOntologyVersion, NSUUID;

#import <Foundation/Foundation.h>


@interface HDConceptIndexEntry : NSObject

@property (readonly, nonatomic) NSUInteger compoundIndex; // ivar: _compoundIndex
@property (readonly, nonatomic) NSInteger conceptIdentifier; // ivar: _conceptIdentifier
@property (readonly, nonatomic) NSInteger conceptVersion; // ivar: _conceptVersion
@property (readonly, copy, nonatomic) NSString *keyPath; // ivar: _keyPath
@property (readonly, copy, nonatomic) HKOntologyVersion *ontologyVersion; // ivar: _ontologyVersion
@property (readonly, copy, nonatomic) NSUUID *sampleUUID; // ivar: _sampleUUID
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithSampleUUID:(id)arg0 conceptIdentifier:(NSInteger)arg1 conceptVersion:(NSInteger)arg2 keyPath:(id)arg3 compoundIndex:(NSUInteger)arg4 type:(NSUInteger)arg5 ontologyVersion:(id)arg6 ;


@end


#endif