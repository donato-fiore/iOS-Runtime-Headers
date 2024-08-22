// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMMANAGEDCONFIGURATIONPROFILEINFO_H
#define HMMANAGEDCONFIGURATIONPROFILEINFO_H

@class HMFObject, NSString, NSData;
@protocol NSSecureCoding, NSCopying;



@interface HMManagedConfigurationProfileInfo : HMFObject <NSSecureCoding, NSCopying>



@property (readonly, copy) NSString *identifier; // ivar: _identifier
@property (readonly) NSData *profileData; // ivar: _profileData


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 profileData:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif