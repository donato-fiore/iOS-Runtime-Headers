// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFLOCATIONSNAPSHOT_H
#define AFLOCATIONSNAPSHOT_H

@class NSNumber, NSString;
@protocol AFContextSnapshot, NSCopying, NSSecureCoding, AFDictionaryConvertible;

#import <Foundation/Foundation.h>


@interface AFLocationSnapshot : NSObject <AFContextSnapshot, NSCopying, NSSecureCoding, AFDictionaryConvertible>



@property (readonly, nonatomic) NSInteger accessState; // ivar: _accessState
@property (readonly, copy, nonatomic) NSNumber *altitude; // ivar: _altitude
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSNumber *direction; // ivar: _direction
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSNumber *horizontalAccuracy; // ivar: _horizontalAccuracy
@property (readonly, copy, nonatomic) NSNumber *latitude; // ivar: _latitude
@property (readonly, copy, nonatomic) NSNumber *longitude; // ivar: _longitude
@property (readonly, nonatomic) BOOL preciseLocationEnabled; // ivar: _preciseLocationEnabled
@property (readonly, copy, nonatomic) NSNumber *speed; // ivar: _speed
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSNumber *verticalAccuracy; // ivar: _verticalAccuracy


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)ace_setRequestOrigin;
-(id)ad_shortDescription;
-(id)buildDictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithLatitude:(id)arg0 longitude:(id)arg1 altitude:(id)arg2 direction:(id)arg3 speed:(id)arg4 verticalAccuracy:(id)arg5 horizontalAccuracy:(id)arg6 preciseLocationEnabled:(BOOL)arg7 accessState:(NSInteger)arg8 ;
-(id)initWithSerializedBackingStore:(id)arg0 ;
-(id)initWithSetRequestOrigin:(id)arg0 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(id)serializedBackingStore;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif