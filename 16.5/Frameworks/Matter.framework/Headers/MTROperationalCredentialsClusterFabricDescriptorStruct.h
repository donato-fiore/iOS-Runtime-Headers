// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTROPERATIONALCREDENTIALSCLUSTERFABRICDESCRIPTORSTRUCT_H
#define MTROPERATIONALCREDENTIALSCLUSTERFABRICDESCRIPTORSTRUCT_H

@class NSNumber, NSString, NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTROperationalCredentialsClusterFabricDescriptorStruct : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *fabricID; // ivar: _fabricID
@property (copy, nonatomic) NSNumber *fabricId;
@property (copy, nonatomic) NSNumber *fabricIndex; // ivar: _fabricIndex
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSNumber *nodeID; // ivar: _nodeID
@property (copy, nonatomic) NSNumber *nodeId;
@property (copy, nonatomic) NSData *rootPublicKey; // ivar: _rootPublicKey
@property (copy, nonatomic) NSNumber *vendorID; // ivar: _vendorID
@property (copy, nonatomic) NSNumber *vendorId;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif