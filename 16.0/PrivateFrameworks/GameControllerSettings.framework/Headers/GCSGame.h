// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCSGAME_H
#define GCSGAME_H

@class NSString, NSDictionary, NSDate;
@protocol NSSecureCoding, GCSJSONSerializable, GCSJSONObject;

#import <Foundation/Foundation.h>


@interface GCSGame : NSObject <NSSecureCoding, GCSJSONSerializable>



@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) NSDictionary *controllerToProfileMappings; // ivar: _controllerToProfileMappings
@property (readonly, nonatomic) NSObject<GCSJSONObject> *jsonObject;
@property (readonly, nonatomic) NSDate *modifiedDate; // ivar: _modifiedDate
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)archivalClasses;
+(id)defaultGame;
+(id)defaultIdentifier;
-(id)description;
-(id)initWithBundleIdentifier:(id)arg0 title:(id)arg1 controllerToProfileMappings:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJSONObject:(id)arg0 ;
-(id)profileForController:(id)arg0 profiles:(id)arg1 ;
-(id)profileUUIDForPersistentControllerIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif