// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCDEVICEELEMENTDESCRIPTION_H
#define GCDEVICEELEMENTDESCRIPTION_H

@class NSSet, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GCDeviceElementDescription : NSObject <NSCopying, NSSecureCoding>



@property (readonly) NSSet *additionalAliases;
@property (readonly, getter=isBoundToSystemGesture) BOOL boundToSystemGesture;
@property (readonly, getter=isMappableToSystemGestures) BOOL mappableToSystemGestures;
@property (readonly) NSString *name;
@property (readonly) NSString *nameLocalizationKey; // ivar: _nameLocalizationKey
@property (readonly, getter=isRemappable) BOOL remappable;
@property (readonly) NSString *symbolName;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedName;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif