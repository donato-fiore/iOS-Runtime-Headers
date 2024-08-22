// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCSCOMPLICATION_H
#define NCSCOMPLICATION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NCSComplication : NSObject <NSCopying>



@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (copy, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (nonatomic) BOOL cannotBeDisabled; // ivar: _cannotBeDisabled
@property (copy, nonatomic) NSString *complicationBundleIdentifier; // ivar: _complicationBundleIdentifier
@property (readonly, nonatomic) NSString *complicationIdentifier;
@property (nonatomic) NSUInteger installState; // ivar: _installState
@property (readonly, nonatomic) BOOL isInstalled;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *sockPuppetIdentifier; // ivar: _sockPuppetIdentifier


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif