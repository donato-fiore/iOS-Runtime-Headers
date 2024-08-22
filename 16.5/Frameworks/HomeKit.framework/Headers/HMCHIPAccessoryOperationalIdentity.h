// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMCHIPACCESSORYOPERATIONALIDENTITY_H
#define HMCHIPACCESSORYOPERATIONALIDENTITY_H

@class NSArray, NSString, NSNumber, NSData;
@protocol HMFObject;

#import <Foundation/Foundation.h>


@interface HMCHIPAccessoryOperationalIdentity : NSObject <HMFObject>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSNumber *nodeID; // ivar: _nodeID
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSData *rootPublicKey; // ivar: _rootPublicKey
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithRootPublicKey:(id)arg0 nodeID:(id)arg1 ;


@end


#endif