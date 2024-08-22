// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NECONTENTFILTER_H
#define NECONTENTFILTER_H

@protocol NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "NEPerApp.h"
#import "NEFilterProviderConfiguration.h"

@interface NEContentFilter : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>



@property BOOL enableManualMode; // ivar: _enableManualMode
@property (getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (nonatomic) NSInteger grade; // ivar: _grade
@property (copy) NEPerApp *perApp; // ivar: _perApp
@property (copy) NEFilterProviderConfiguration *provider; // ivar: _provider


+(BOOL)supportsSecureCoding;
-(BOOL)checkValidityAndCollectErrors:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif