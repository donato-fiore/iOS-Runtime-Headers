// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEAPPINFO_H
#define NEAPPINFO_H

@class NSString, NSData, NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NEAppInfo : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *appVersion; // ivar: _appVersion
@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (copy, nonatomic) NSData *cdHash; // ivar: _cdHash
@property (nonatomic) int pid; // ivar: _pid
@property (copy, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(BOOL)isComplete;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif