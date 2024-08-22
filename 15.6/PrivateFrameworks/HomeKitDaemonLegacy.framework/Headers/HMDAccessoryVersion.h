// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDACCESSORYVERSION_H
#define HMDACCESSORYVERSION_H

@class HMFSoftwareVersion, NSString;
@protocol NSCopying, NSSecureCoding;



@interface HMDAccessoryVersion : HMFSoftwareVersion <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *rawVersionString; // ivar: _rawVersionString


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVersionString:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif