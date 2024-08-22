// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMESHINSTANCEDESCRIPTOR_H
#define REMESHINSTANCEDESCRIPTOR_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface REMeshInstanceDescriptor : NSObject <NSSecureCoding>



@property (readonly, nonatomic) REMeshLodSelectOptions lodSelectOptions; // ivar: _lodSelectOptions
@property (readonly, nonatomic) unsigned int modelIndex; // ivar: _modelIndex
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) ? transform; // ivar: _transform


+(BOOL)supportsSecureCoding;
-(BOOL)validateWithModelCount:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMeshAssetInstance:(*void)arg0 ;
-(id)initWithName:(id)arg0 modelIndex:(unsigned int)arg1 transform:(struct ? )arg2 lodSelectOptions:(struct REMeshLodSelectOptions )arg3 ;
-(struct MeshInstance )meshInstanceWithModels:(*void)arg0 meshManager:(*void)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif