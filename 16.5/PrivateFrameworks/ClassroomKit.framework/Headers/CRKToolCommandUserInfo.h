// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKTOOLCOMMANDUSERINFO_H
#define CRKTOOLCOMMANDUSERINFO_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface CRKToolCommandUserInfo : NSObject

@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, copy, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier


-(id)appVersion;
-(id)initWithSessionIdentifier:(id)arg0 ;


@end


#endif