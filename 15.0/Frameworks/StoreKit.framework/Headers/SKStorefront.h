// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKSTOREFRONT_H
#define SKSTOREFRONT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SKStorefront : NSObject

@property (readonly, copy, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier


-(id)_initWithIdentifier:(id)arg0 countryCode:(id)arg1 ;
-(id)description;


@end


#endif