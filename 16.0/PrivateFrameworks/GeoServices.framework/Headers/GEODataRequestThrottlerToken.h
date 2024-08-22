// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEODATAREQUESTTHROTTLERTOKEN_H
#define GEODATAREQUESTTHROTTLERTOKEN_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GEODataRequestThrottlerToken : NSObject <NSSecureCoding>

 {
    CGFloat _createdAt;
    ? _kind;
    NSString *_bundleId;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isValidForRequest:(struct ? )arg0 client:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequest:(struct ? )arg0 forClient:(id)arg1 ;
-(id)initWithXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCCoder:(id)arg0 ;
-(void)refresh;


@end


#endif