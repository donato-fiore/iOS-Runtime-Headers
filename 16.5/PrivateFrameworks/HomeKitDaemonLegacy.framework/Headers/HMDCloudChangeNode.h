// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCLOUDCHANGENODE_H
#define HMDCLOUDCHANGENODE_H

@class HMFObject, NSMapTable, NSUUID, NSString;


#import "HMDCloudChange.h"
#import "HMDCloudChangeNode.h"

@interface HMDCloudChangeNode : HMFObject

@property (retain, nonatomic) HMDCloudChange *change; // ivar: _change
@property (retain, nonatomic) NSMapTable *children; // ivar: _children
@property (readonly, nonatomic) BOOL forceDelete; // ivar: _forceDelete
@property (readonly, nonatomic) BOOL orphaned; // ivar: _orphaned
@property (weak, nonatomic) HMDCloudChangeNode *parent; // ivar: _parent
@property (copy, nonatomic) NSUUID *parentUuid; // ivar: _parentUuid
@property (copy, nonatomic) NSString *recordName; // ivar: _recordName
@property (copy, nonatomic) NSString *type; // ivar: _type
@property (copy, nonatomic) NSUUID *uuid; // ivar: _uuid


+(id)shortDescription;
-(id)_allNodesInBranch;
-(id)_initWithUUID:(id)arg0 parentUUID:(id)arg1 recordName:(id)arg2 type:(id)arg3 change:(id)arg4 ;
-(id)description;
-(id)init;
-(id)initWithChange:(id)arg0 ;
-(id)initWithCloudRecord:(id)arg0 ;
-(id)initWithModel:(id)arg0 ;
-(id)initWithRecordMapping:(id)arg0 ;
-(id)shortDescription;
-(void)_markBranchOrphaned;
-(void)_updateWithChange:(id)arg0 ;
-(void)_updateWithCloudRecord:(id)arg0 ;
-(void)_updateWithModel:(id)arg0 ;
-(void)addChild:(id)arg0 ;
-(void)deleteChildren;
-(void)logChangeTreeWithIndent:(id)arg0 ;
-(void)removeChild:(id)arg0 ;
-(void)updateRecordMapping:(id)arg0 ;


@end


#endif