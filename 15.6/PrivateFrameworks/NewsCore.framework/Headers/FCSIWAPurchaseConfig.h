// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCSIWAPURCHASECONFIG_H
#define FCSIWAPURCHASECONFIG_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FCSIWAPurchaseConfig : NSObject

@property (readonly, copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (readonly, copy, nonatomic) NSString *teamIdentifier; // ivar: _teamIdentifier


-(id)initWithClientIdentifier:(id)arg0 teamIdentifier:(id)arg1 ;
-(id)initWithConfigDictionary:(id)arg0 ;


@end


#endif