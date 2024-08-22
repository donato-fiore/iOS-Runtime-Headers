// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSCHEME_H
#define ICSCHEME_H

@class NSArray, NSString, NSDictionary, NSURL;

#import <Foundation/Foundation.h>

#import "ICApp.h"

@interface ICScheme : NSObject

@property (readonly, nonatomic) NSArray *actions; // ivar: _actions
@property (readonly, weak, nonatomic) ICApp *app; // ivar: _app
@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly, nonatomic) NSString *callbackCancelURLKey;
@property (readonly, nonatomic) NSString *callbackErrorURLKey;
@property (readonly, nonatomic, getter=isCallbackScheme) BOOL callbackScheme;
@property (readonly, nonatomic) NSString *callbackSourceNameKey;
@property (readonly, nonatomic) NSString *callbackSuccessURLKey;
@property (readonly, nonatomic) BOOL canLaunchApp;
@property (readonly, nonatomic) NSArray *capabilities; // ivar: _capabilities
@property (readonly, copy, nonatomic) NSDictionary *definition; // ivar: _definition
@property (readonly, nonatomic) NSString *scheme; // ivar: _scheme
@property (readonly, nonatomic) NSURL *universalLinkBaseURL;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesURL:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithDefinition:(id)arg0 app:(id)arg1 ;


@end


#endif