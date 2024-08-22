// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFUBIQUITYBASELINEMETADATA_H
#define PFUBIQUITYBASELINEMETADATA_H

@class NSString, NSMutableDictionary;
@protocol NSCoding, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PFUbiquityLocation.h"
#import "PFUbiquityKnowledgeVector.h"

@interface PFUbiquityBaselineMetadata : NSObject <NSCoding, NSSecureCoding>

 {
    NSString *_storeName;
    NSString *_authorPeerID;
    NSString *_modelVersionHash;
    PFUbiquityLocation *_rootLocation;
    PFUbiquityKnowledgeVector *_pKV;
    PFUbiquityKnowledgeVector *_kv;
    NSMutableDictionary *_peerRanges;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)createNewLocalRangeWithRangeStart:(NSUInteger)arg0 andRangeEnd:(NSUInteger)arg1 forEntityNamed:(id)arg2 ;
-(id)createPeerRangeDictionary:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocalPeerID:(id)arg0 storeName:(id)arg1 modelVersionHash:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
-(void)addDictionaryForPeerRange:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif