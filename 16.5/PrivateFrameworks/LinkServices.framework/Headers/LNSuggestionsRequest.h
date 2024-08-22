// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNSUGGESTIONSREQUEST_H
#define LNSUGGESTIONSREQUEST_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface LNSuggestionsRequest : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic, getter=isExplicitRequest) BOOL explicitRequest; // ivar: _explicitRequest
@property (readonly, nonatomic, getter=isOnScreen) BOOL onScreen; // ivar: _onScreen


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBundleIdentifier:(id)arg0 onScreen:(BOOL)arg1 explicitRequest:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif