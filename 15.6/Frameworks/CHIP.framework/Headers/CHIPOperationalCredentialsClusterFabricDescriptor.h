// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPOPERATIONALCREDENTIALSCLUSTERFABRICDESCRIPTOR_H
#define CHIPOPERATIONALCREDENTIALSCLUSTERFABRICDESCRIPTOR_H

@class NSNumber, NSString, NSData;

#import <Foundation/Foundation.h>


@interface CHIPOperationalCredentialsClusterFabricDescriptor : NSObject

@property (retain, nonatomic) NSNumber *fabricId; // ivar: _fabricId
@property (retain, nonatomic) NSNumber *fabricIndex; // ivar: _fabricIndex
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) NSNumber *nodeId; // ivar: _nodeId
@property (retain, nonatomic) NSData *rootPublicKey; // ivar: _rootPublicKey
@property (retain, nonatomic) NSNumber *vendorId; // ivar: _vendorId


-(id)init;


@end


#endif