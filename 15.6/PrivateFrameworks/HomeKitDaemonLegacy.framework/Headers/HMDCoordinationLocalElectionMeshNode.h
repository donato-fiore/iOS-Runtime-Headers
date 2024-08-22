// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCOORDINATIONLOCALELECTIONMESHNODE_H
#define HMDCOORDINATIONLOCALELECTIONMESHNODE_H

@class NSString, COMeshNode;
@protocol HMDLocalElectionMeshNode;

#import <Foundation/Foundation.h>


@interface HMDCoordinationLocalElectionMeshNode : NSObject <HMDLocalElectionMeshNode>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSString *idsIdentifier; // ivar: _idsIdentifier
@property (readonly, weak) COMeshNode *meshNode; // ivar: _meshNode
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithMeshNode:(id)arg0 ;


@end


#endif