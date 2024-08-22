// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC20PEGASUSCONFIGURATION14CONFIGINTERNAL_H
#define _TTC20PEGASUSCONFIGURATION14CONFIGINTERNAL_H

@class NSString;
@protocol _TtP20PegasusConfiguration6Config_;

#import <Foundation/Foundation.h>


@interface _TtC20PegasusConfiguration14ConfigInternal : NSObject <_TtP20PegasusConfiguration6Config_>

 {
    ? data;
    ? userAgent;
    ? clientName;
    ? userDefaults;
}


@property (nonatomic, readonly) NSString *clientName;
@property (nonatomic, readonly) NSString *firstUseDescriptionText;
@property (nonatomic, readonly) BOOL isEnabled;
@property (nonatomic, readonly) BOOL isExpired;
@property (nonatomic, readonly) NSString *searchURLString;
@property (nonatomic, readonly) NSString *userAgent;


+(BOOL)supportsSecureCoding;
-(id)findConfigForUserAgent:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(id)valueForKey:(id)arg0 ofType:(Class)arg1 ;
-(id)valueForKey:(id)arg0 shouldConsiderOverrides:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif