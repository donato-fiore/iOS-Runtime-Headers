// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _REACTIONKEY_H
#define _REACTIONKEY_H

@class NSString;
@protocol REDonatedActionIdentifierProviding;

#import <Foundation/Foundation.h>


@interface _REActionKey : NSObject {
    NSUInteger _hash;
}


@property (readonly, nonatomic) NSObject<REDonatedActionIdentifierProviding> *actionType; // ivar: _actionType
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger relevanceProvidersHash; // ivar: _relevanceProvidersHash


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithIdentifier:(id)arg0 actionType:(id)arg1 relevanceProvidersHash:(NSUInteger)arg2 ;


@end


#endif