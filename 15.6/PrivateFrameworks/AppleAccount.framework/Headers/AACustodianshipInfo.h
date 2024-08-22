// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AACUSTODIANSHIPINFO_H
#define AACUSTODIANSHIPINFO_H

@class NSUUID, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AACustodianshipInfo : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSUUID *custodianID; // ivar: _custodianID
@property (readonly, nonatomic) NSString *ownerHandle; // ivar: _ownerHandle
@property (readonly, nonatomic) NSInteger status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithID:(id)arg0 status:(NSInteger)arg1 ownerHandle:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif