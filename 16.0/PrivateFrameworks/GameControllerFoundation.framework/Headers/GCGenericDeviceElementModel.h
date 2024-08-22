// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCGENERICDEVICEELEMENTMODEL_H
#define GCGENERICDEVICEELEMENTMODEL_H

@class NSString, NSPredicate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GCGenericDeviceElementModel : NSObject <NSCopying, NSSecureCoding>



@property (readonly) NSInteger calibrationMax; // ivar: _calibrationMax
@property (readonly) NSInteger calibrationMin; // ivar: _calibrationMin
@property unsigned int elementCookie; // ivar: _elementCookie
@property (readonly, copy) NSString *identifier; // ivar: _identifier
@property (readonly, copy) NSPredicate *predicate; // ivar: _predicate


+(BOOL)supportsSecureCoding;
+(id)description;
+(id)modelWithDictionaryRepresentation:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif