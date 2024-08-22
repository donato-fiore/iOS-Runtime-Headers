// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMEDIAENTITY_H
#define MPMEDIAENTITY_H

@class MIPMultiverseIdentifier;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MPMediaLibrary.h"
#import "MPMediaItem.h"

@interface MPMediaEntity : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) MPMediaLibrary *mediaLibrary;
@property (readonly, nonatomic) MIPMultiverseIdentifier *multiverseIdentifier; // ivar: _multiverseIdentifier
@property (readonly, nonatomic) NSUInteger persistentID;
@property (readonly, nonatomic) MPMediaItem *representativeItem;


+(BOOL)canFilterByProperty:(id)arg0 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)cachedValueForProperty:(id)arg0 isCached:(*BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)genericModelObjectWithRequestedProperties:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMultiverseIdentifier:(id)arg0 library:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)valueForProperty:(id)arg0 ;
-(id)valuesForProperties:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateValuesForProperties:(id)arg0 usingBlock:(id)arg1 ;
-(void)invalidateCachedProperties;


@end


#endif