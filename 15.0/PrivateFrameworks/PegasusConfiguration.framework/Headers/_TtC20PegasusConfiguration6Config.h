// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC20PEGASUSCONFIGURATION6CONFIG_H
#define _TTC20PEGASUSCONFIGURATION6CONFIG_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC20PegasusConfiguration6Config : NSObject <NSSecureCoding>

 {
    ? _configData;
    ? _userAgent;
    ? _clientName;
    ? _userDefaults;
}




+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif