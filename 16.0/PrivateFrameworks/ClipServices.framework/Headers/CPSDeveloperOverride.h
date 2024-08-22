// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPSDEVELOPEROVERRIDE_H
#define CPSDEVELOPEROVERRIDE_H

@class NSString, NSURL;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CPSDeveloperOverride : NSObject <NSCopying, NSSecureCoding>

 {
    *CGImage _heroImage;
}


@property (nonatomic) NSInteger action; // ivar: _action
@property (copy, nonatomic) NSString *clipBundleID; // ivar: _clipBundleID
@property (nonatomic) *CGImage heroImage;
@property (readonly, nonatomic) NSURL *heroImageURL;
@property (copy, nonatomic) NSString *invocationURL; // ivar: _invocationURL
@property (readonly, nonatomic) BOOL isComplete;
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic, getter=isValid) BOOL valid;


+(BOOL)hasOverride;
+(BOOL)supportsSecureCoding;
+(NSUInteger)_indexOf:(id)arg0 ;
+(id)allOverrides;
+(id)overrideForURL:(id)arg0 ;
+(void)loadAllOverridesIfNeeded;
+(void)persistAllOverrides;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)clear;
-(void)encodeWithCoder:(id)arg0 ;
-(void)save;


@end


#endif