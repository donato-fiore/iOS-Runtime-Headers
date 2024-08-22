// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHSWIDGETCONFIGURATIONHOSTSBOX_H
#define CHSWIDGETCONFIGURATIONHOSTSBOX_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CHSWidgetConfigurationHostsBox : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *configurationsByHost; // ivar: _configurationsByHost


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfigurationsByHost:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif