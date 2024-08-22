// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTROPERATIONALCREDENTIALSCLUSTERFABRICDESCRIPTOR_H
#define MTROPERATIONALCREDENTIALSCLUSTERFABRICDESCRIPTOR_H

@class NSNumber, NSString, NSData;

#import <Foundation/Foundation.h>


@interface MTROperationalCredentialsClusterFabricDescriptor : NSObject

@property (retain, nonatomic) NSNumber *fabricId; // ivar: _fabricId
@property (retain, nonatomic) NSNumber *fabricIndex; // ivar: _fabricIndex
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) NSNumber *nodeId; // ivar: _nodeId
@property (retain, nonatomic) NSData *rootPublicKey; // ivar: _rootPublicKey
@property (retain, nonatomic) NSNumber *vendorId; // ivar: _vendorId


-(id)description;
-(id)init;


@end


#endif