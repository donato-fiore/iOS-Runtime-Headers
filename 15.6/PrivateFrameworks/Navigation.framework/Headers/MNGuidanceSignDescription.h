// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNGUIDANCESIGNDESCRIPTION_H
#define MNGUIDANCESIGNDESCRIPTION_H

@class NSArray, GEOJunction, NSString, NSUUID, NSDictionary;
@protocol NSSecureCoding, GEOTransitArtworkDataSource;

#import <Foundation/Foundation.h>


@interface MNGuidanceSignDescription : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSObject<GEOTransitArtworkDataSource> *artworkOverride; // ivar: _artworkOverride
@property (readonly, nonatomic) int composedGuidanceEventIndex; // ivar: _composedGuidanceEventIndex
@property (readonly, nonatomic) NSArray *details; // ivar: _details
@property (readonly, nonatomic) NSInteger distanceDetailLevel; // ivar: _distanceDetailLevel
@property (readonly, nonatomic) GEOJunction *junction; // ivar: _junction
@property (readonly, nonatomic) int shieldID; // ivar: _shieldID
@property (readonly, nonatomic) NSString *shieldStringID; // ivar: _shieldStringID
@property (readonly, nonatomic) NSString *shieldText; // ivar: _shieldText
@property (readonly, nonatomic) NSArray *titles; // ivar: _titles
@property (readonly, nonatomic) NSUUID *uniqueID; // ivar: _uniqueID
@property (readonly, nonatomic) NSDictionary *variableOverrides; // ivar: _variableOverrides


+(BOOL)supportsSecureCoding;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithID:(id)arg0 titles:(id)arg1 details:(id)arg2 variableOverrides:(id)arg3 distanceDetailLevel:(int)arg4 junction:(id)arg5 artworkOverride:(id)arg6 shieldText:(id)arg7 shieldID:(int)arg8 shieldStringID:(id)arg9 composedGuidanceEventIndex:(int)arg10 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif