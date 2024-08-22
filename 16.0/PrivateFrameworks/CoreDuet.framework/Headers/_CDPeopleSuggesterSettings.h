// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CDPEOPLESUGGESTERSETTINGS_H
#define _CDPEOPLESUGGESTERSETTINGS_H

@class NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _CDPeopleSuggesterSettings : NSObject <NSCopying>



@property BOOL aggregateByIdentifier; // ivar: _aggregateByIdentifier
@property (retain) NSSet *constrainAccounts; // ivar: _constrainAccounts
@property (retain) NSSet *constrainBundleIds; // ivar: _constrainBundleIds
@property (retain) NSSet *constrainDomainIdentifiers; // ivar: _constrainDomainIdentifiers
@property (retain) NSSet *constrainIdentifiers; // ivar: _constrainIdentifiers
@property NSUInteger constrainMaxRecipientCount; // ivar: _constrainMaxRecipientCount
@property (retain) NSSet *constrainMechanisms; // ivar: _constrainMechanisms
@property (retain) NSSet *constrainPersonIdType; // ivar: _constrainPersonIdType
@property (retain) NSSet *constrainPersonIds; // ivar: _constrainPersonIds
@property (retain) NSSet *ignoreContactIdentifiers; // ivar: _ignoreContactIdentifiers
@property BOOL inferActiveInteractions; // ivar: _inferActiveInteractions
@property NSUInteger maxNumberOfPeopleSuggested; // ivar: _maxNumberOfPeopleSuggested
@property BOOL requireOutgoingInteraction; // ivar: _requireOutgoingInteraction
@property BOOL useFuture; // ivar: _useFuture
@property BOOL useTitleToContrainKeywords; // ivar: _useTitleToContrainKeywords


+(id)defaultSettings;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif