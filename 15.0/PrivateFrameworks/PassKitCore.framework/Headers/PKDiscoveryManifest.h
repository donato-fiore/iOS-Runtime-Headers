// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKDISCOVERYMANIFEST_H
#define PKDISCOVERYMANIFEST_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKDiscoveryMessagesMetadata.h"

@interface PKDiscoveryManifest : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *discoveryItems; // ivar: _discoveryItems
@property (readonly, nonatomic) PKDiscoveryMessagesMetadata *messagesMetadata; // ivar: _messagesMetadata
@property (readonly, nonatomic, getter=isMiniCardsAllowed) BOOL miniCardsAllowed; // ivar: _miniCardsAllowed
@property (readonly, nonatomic) NSArray *rules; // ivar: _rules
@property (readonly, nonatomic) NSInteger version; // ivar: _version


+(BOOL)supportsSecureCoding;
+(id)manifestFromURL:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithVersion:(NSInteger)arg0 rules:(id)arg1 discoveryItems:(id)arg2 engagementMessagesMetadata:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif