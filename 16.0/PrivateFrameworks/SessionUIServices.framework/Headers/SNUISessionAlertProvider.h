// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNUISESSIONALERTPROVIDER_H
#define SNUISESSIONALERTPROVIDER_H

@class NSString;
@protocol SNUISessionAlertProviding;

#import <Foundation/Foundation.h>

#import "SNUISessionAlertOptions.h"

@interface SNUISessionAlertProvider : NSObject <SNUISessionAlertProviding>



@property (readonly, nonatomic) NSInteger action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SNUISessionAlertOptions *options; // ivar: _options
@property (readonly, copy, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier
@property (readonly) Class superclass;


-(NSInteger)_sessionAlertAction:(NSInteger)arg0 ;
-(id)initWithSessionAlertProviding:(id)arg0 ;


@end


#endif