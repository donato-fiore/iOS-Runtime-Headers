// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMESHLEVELOFDETAILDESCRIPTOR_H
#define REMESHLEVELOFDETAILDESCRIPTOR_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface REMeshLevelOfDetailDescriptor : NSObject <NSSecureCoding>



@property (readonly, nonatomic) float maxViewDepth; // ivar: _maxViewDepth
@property (readonly, nonatomic) unsigned int meshPartEndIndex; // ivar: _meshPartEndIndex
@property (readonly, nonatomic) float minScreenArea; // ivar: _minScreenArea


+(BOOL)supportsSecureCoding;
-(BOOL)validateWithPartCount:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLodLevelInfo:(struct MeshLodLevelInfo *)arg0 ;
-(id)initWithMeshPartEndIndex:(unsigned int)arg0 minScreenArea:(float)arg1 maxViewDepth:(float)arg2 ;
-(struct MeshLodLevelInfo )lodLevelInfo;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif