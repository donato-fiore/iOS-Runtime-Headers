// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASBOARDSERVICESCONFIGURATION_H
#define SASBOARDSERVICESCONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SASBoardServicesConfiguration : NSObject

@property (retain, nonatomic) NSString *machServiceIdentifier; // ivar: _machServiceIdentifier
@property (retain, nonatomic) NSString *presentationDomain; // ivar: _presentationDomain
@property (retain, nonatomic) NSString *presentationIdentifier; // ivar: _presentationIdentifier
@property (retain, nonatomic) NSString *signalDomain; // ivar: _signalDomain
@property (retain, nonatomic) NSString *signalIdentifier; // ivar: _signalIdentifier


+(id)configuration;
+(id)new;
-(id)_init;
-(id)domainForService:(NSInteger)arg0 ;
-(id)identifierForService:(NSInteger)arg0 ;
-(id)init;


@end


#endif