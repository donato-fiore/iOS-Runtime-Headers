// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEBUNDLEPROXY_H
#define NEBUNDLEPROXY_H

@class NSString, NSArray, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NEBundleProxy : NSObject <NSSecureCoding>



@property (readonly, retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isWatchKitApp; // ivar: _isWatchKitApp
@property (readonly, retain, nonatomic) NSArray *machOUUIDs; // ivar: _machOUUIDs
@property (readonly, retain, nonatomic) NSString *name; // ivar: _name
@property (readonly, retain, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 url:(id)arg1 machOUUIDs:(id)arg2 name:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif