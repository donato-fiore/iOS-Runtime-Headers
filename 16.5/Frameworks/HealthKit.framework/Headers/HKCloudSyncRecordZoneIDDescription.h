// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCLOUDSYNCRECORDZONEIDDESCRIPTION_H
#define HKCLOUDSYNCRECORDZONEIDDESCRIPTION_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKCloudSyncRecordZoneIDDescription : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *ownerName; // ivar: _ownerName
@property (readonly, copy, nonatomic) NSString *zoneName; // ivar: _zoneName


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithZoneName:(id)arg0 ownerName:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif