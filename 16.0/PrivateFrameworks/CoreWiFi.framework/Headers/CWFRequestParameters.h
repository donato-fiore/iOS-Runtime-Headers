// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CWFREQUESTPARAMETERS_H
#define CWFREQUESTPARAMETERS_H

@class NSUUID, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CWFRequestParameters : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (copy, nonatomic) NSString *interfaceName; // ivar: _interfaceName
@property (nonatomic) NSInteger qualityOfService; // ivar: _qualityOfService
@property (nonatomic) NSInteger queuePriority; // ivar: _queuePriority
@property (nonatomic) NSUInteger timeout; // ivar: _timeout
@property (nonatomic) int virtualInterfaceRole; // ivar: _virtualInterfaceRole


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRequestParameters:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif