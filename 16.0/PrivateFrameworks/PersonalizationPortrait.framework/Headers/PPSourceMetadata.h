// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPSOURCEMETADATA_H
#define PPSOURCEMETADATA_H

@class NSSet;
@protocol NSCopying, NSSecureCoding, MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface PPSourceMetadata : NSObject <NSCopying, NSSecureCoding, MLFeatureProvider>



@property (readonly, nonatomic) unsigned short contactHandleCount; // ivar: _contactHandleCount
@property (readonly, nonatomic) unsigned short donationCount; // ivar: _donationCount
@property (readonly, nonatomic) unsigned int dwellTimeSeconds; // ivar: _dwellTimeSeconds
@property (readonly, nonatomic) NSSet *featureNames;
@property (readonly, nonatomic) unsigned char flags; // ivar: _flags
@property (readonly, nonatomic) unsigned int lengthCharacters; // ivar: _lengthCharacters
@property (readonly, nonatomic) unsigned int lengthSeconds; // ivar: _lengthSeconds


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSourceMetadata:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)featureValueForName:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDwellTimeSeconds:(unsigned int)arg0 lengthSeconds:(unsigned int)arg1 lengthCharacters:(unsigned int)arg2 donationCount:(unsigned short)arg3 contactHandleCount:(unsigned short)arg4 flags:(unsigned char)arg5 ;
-(id)initWithFlags:(unsigned char)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif