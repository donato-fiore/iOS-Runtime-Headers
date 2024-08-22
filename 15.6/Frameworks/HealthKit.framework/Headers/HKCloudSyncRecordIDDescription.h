// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCLOUDSYNCRECORDIDDESCRIPTION_H
#define HKCLOUDSYNCRECORDIDDESCRIPTION_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKCloudSyncRecordIDDescription : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *recordName; // ivar: _recordName


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecordName:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif