// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMUSERCLOUDSHAREREPAIRINFO_H
#define HMUSERCLOUDSHAREREPAIRINFO_H

@class NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMUserCloudShareRepairInfo : NSObject <NSSecureCoding>



@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly) NSInteger version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 version:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif