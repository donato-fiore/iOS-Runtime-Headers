// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDAPPINFO_H
#define DNDAPPINFO_H

@class NSURL, NSString;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "DNDApplicationIdentifier.h"

@interface DNDAppInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) DNDApplicationIdentifier *applicationIdentifier; // ivar: _applicationIdentifier
@property (readonly, copy, nonatomic) NSURL *cachedIconURL; // ivar: _cachedIconURL
@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSInteger source; // ivar: _source
@property (readonly, copy, nonatomic) NSURL *storeIconURL; // ivar: _storeIconURL


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithAppInfo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSource:(NSInteger)arg0 applicationIdentifier:(id)arg1 displayName:(id)arg2 storeIconURL:(id)arg3 cachedIconURL:(id)arg4 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif