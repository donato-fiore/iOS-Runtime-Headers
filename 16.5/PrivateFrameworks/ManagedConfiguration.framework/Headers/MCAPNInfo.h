// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCAPNINFO_H
#define MCAPNINFO_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface MCAPNInfo : NSObject

@property (retain, nonatomic) NSString *apnName; // ivar: _apnName
@property (retain, nonatomic) NSString *password; // ivar: _password
@property (retain, nonatomic) NSString *proxy; // ivar: _proxy
@property (retain, nonatomic) NSNumber *proxyPort; // ivar: _proxyPort
@property (retain, nonatomic) NSString *username; // ivar: _username


-(id)defaultsRepresentation;
-(id)description;
-(id)strippedDefaultsRepresentation;


@end


#endif