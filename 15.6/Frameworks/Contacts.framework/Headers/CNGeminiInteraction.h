// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNGEMINIINTERACTION_H
#define CNGEMINIINTERACTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CNGeminiInteraction : NSObject

@property (readonly, copy, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (readonly, nonatomic) NSInteger directionality; // ivar: _directionality
@property (readonly, copy, nonatomic) NSString *handle; // ivar: _handle
@property (readonly, nonatomic) NSInteger transport; // ivar: _transport


-(id)initWithTransport:(NSInteger)arg0 directionality:(NSInteger)arg1 destinationHandle:(id)arg2 ;
-(id)initWithTransport:(NSInteger)arg0 directionality:(NSInteger)arg1 destinationHandle:(id)arg2 destinationContactIdentifier:(id)arg3 ;


@end


#endif