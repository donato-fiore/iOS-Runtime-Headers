// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHENDPOINTS_H
#define SHENDPOINTS_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface SHEndpoints : NSObject

@property (readonly, nonatomic) NSDictionary *endpoints; // ivar: _endpoints
@property (readonly, copy, nonatomic) NSString *suggestedLanguage; // ivar: _suggestedLanguage


-(id)initWithConfiguration:(id)arg0 suggestedLanguage:(id)arg1 ;
-(id)lookupURLPathForClientIdentifier:(id)arg0 ;
-(id)matchURLPathForClientIdentifier:(id)arg0 ;


@end


#endif