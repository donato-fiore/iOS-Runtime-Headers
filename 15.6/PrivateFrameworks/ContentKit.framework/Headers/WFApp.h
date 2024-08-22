// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFAPP_H
#define WFAPP_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFApp : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier


+(BOOL)supportsSecureCoding;
+(id)findAppWithBundleIdentifier:(id)arg0 name:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif