// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPPROPERTYSET_H
#define MPPROPERTYSET_H

@class NSString, NSSet, NSDictionary;
@protocol NSCopying, NSMutableCopying, NSSecureCoding, NSObject;

#import <Foundation/Foundation.h>


@interface MPPropertySet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *properties; // ivar: _properties
@property (readonly, nonatomic) NSDictionary *relationships; // ivar: _relationships
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)emptyPropertySet;
+(id)propertySetWithProperties:(id)arg0 ;
-(BOOL)containsPropertySet:(id)arg0 ;
-(id)_stateDumpObject;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProperties:(id)arg0 relationships:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)propertySetByCombiningWithPropertySet:(id)arg0 ;
-(id)propertySetByIntersectingWithPropertySet:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif