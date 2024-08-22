// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSDDEFAULTSINFO_H
#define MSDDEFAULTSINFO_H

@class NSUUID, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MediaService.h"

@interface MSDDefaultsInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUUID *homeID; // ivar: _homeID
@property (readonly, nonatomic) NSUUID *homeUserID; // ivar: _homeUserID
@property (copy, nonatomic) NSString *recordName; // ivar: _recordName
@property (copy, nonatomic) NSString *recordType; // ivar: _recordType
@property (copy, nonatomic) NSString *recordZoneName; // ivar: _recordZoneName
@property (readonly, nonatomic) MediaService *service; // ivar: _service


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithService:(id)arg0 homeID:(id)arg1 homeUserID:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif