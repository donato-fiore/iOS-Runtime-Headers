// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOMAPDATASUBSCRIPTION_H
#define GEOMAPDATASUBSCRIPTION_H

@class NSDate, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GEOMapRegion.h"

@interface GEOMapDataSubscription : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger dataTypes; // ivar: _dataTypes
@property (readonly, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic, getter=_originatingBundleIdentifier) NSString *originatingBundleIdentifier; // ivar: _originatingBundleIdentifier
@property (readonly, nonatomic) NSInteger policy; // ivar: _policy
@property (readonly, nonatomic) GEOMapRegion *region; // ivar: _region


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)debugDescription;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 originatingBundleIdentifier:(id)arg1 dataTypes:(NSUInteger)arg2 policy:(NSInteger)arg3 expirationDate:(id)arg4 region:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif