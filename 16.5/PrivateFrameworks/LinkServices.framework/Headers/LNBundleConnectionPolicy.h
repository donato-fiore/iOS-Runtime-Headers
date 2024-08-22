// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNBUNDLECONNECTIONPOLICY_H
#define LNBUNDLECONNECTIONPOLICY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface LNBundleConnectionPolicy : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)connectionWithError:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBundleIdentifier:(id)arg0 appBundleIdentifier:(id)arg1 ;


@end


#endif