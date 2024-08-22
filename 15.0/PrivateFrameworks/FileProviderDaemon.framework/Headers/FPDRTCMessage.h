// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPDRTCMESSAGE_H
#define FPDRTCMESSAGE_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface FPDRTCMessage : NSObject

@property (readonly, nonatomic) NSUInteger category; // ivar: _category
@property (readonly, nonatomic) NSDictionary *payload; // ivar: _payload
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)initWithCategory:(NSUInteger)arg0 type:(NSUInteger)arg1 payload:(id)arg2 ;


@end


#endif