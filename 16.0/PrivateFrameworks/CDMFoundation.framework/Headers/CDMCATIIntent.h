// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDMCATIINTENT_H
#define CDMCATIINTENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CDMCATIIntent : NSObject

@property (retain) NSString *ensemble; // ivar: _ensemble
@property (retain) NSString *guid; // ivar: _guid
@property (retain) NSString *intentName; // ivar: _intentName


-(id)init;
-(id)initWithGuid:(id)arg0 intentName:(id)arg1 ensemble:(id)arg2 ;


@end


#endif