// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDAPPLICATIONIDENTIFIER_H
#define DNDAPPLICATIONIDENTIFIER_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DNDApplicationIdentifier : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) NSUInteger platform; // ivar: _platform


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)diffDescription;
-(id)initWithBundleID:(id)arg0 ;
-(id)initWithBundleID:(id)arg0 platform:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif