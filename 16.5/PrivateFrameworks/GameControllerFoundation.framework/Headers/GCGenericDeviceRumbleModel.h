// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCGENERICDEVICERUMBLEMODEL_H
#define GCGENERICDEVICERUMBLEMODEL_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GCGenericDeviceRumbleModel : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy) NSArray *actuators; // ivar: _actuators
@property (readonly) float dispatchFrequency; // ivar: _dispatchFrequency
@property (readonly, copy) NSArray *nodes; // ivar: _nodes
@property (readonly, copy) NSArray *outputs; // ivar: _outputs


+(BOOL)supportsSecureCoding;
+(id)description;
+(id)modelWithDictionaryRepresentation:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif