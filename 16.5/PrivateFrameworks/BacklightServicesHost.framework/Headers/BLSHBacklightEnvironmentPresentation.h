// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHBACKLIGHTENVIRONMENTPRESENTATION_H
#define BLSHBACKLIGHTENVIRONMENTPRESENTATION_H

@class CAContext, NSArray, NSSet, NSDate;

#import <Foundation/Foundation.h>

#import "BLSHPresentationDateSpecifier.h"
#import "BLSHFlipbookContext.h"

@interface BLSHBacklightEnvironmentPresentation : NSObject

@property (readonly, nonatomic) CAContext *caContext;
@property (readonly, nonatomic) BLSHPresentationDateSpecifier *currentSpecifier;
@property (readonly, copy, nonatomic) NSArray *environments;
@property (readonly, nonatomic) NSSet *environmentsSet; // ivar: _environmentsSet
@property (readonly, copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic) BLSHFlipbookContext *flipbookContext; // ivar: _flipbookContext
@property (readonly, getter=isLiveUpdating) BOOL liveUpdating;
@property (readonly, copy, nonatomic) NSArray *presentationEntries; // ivar: _presentationEntries
@property (readonly, getter=hasUnrestrictedFramerateUpdates) BOOL unrestrictedFramerateUpdates;


-(BOOL)containsEnvironment:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)bls_loggingString;
-(id)bls_shortLoggingString;
-(id)debugDescription;
-(id)description;
-(id)differenceFromPresentation:(id)arg0 ;
-(id)initWithEnvironments:(id)arg0 caContext:(id)arg1 expirationDate:(id)arg2 ;
-(id)initWithPresentationEntries:(id)arg0 caContext:(id)arg1 expirationDate:(id)arg2 ;
-(id)initWithPresentationEntries:(id)arg0 flipbookContext:(id)arg1 expirationDate:(id)arg2 ;
// -(void)differenceFromPresentation:(id)arg0 forEachRemoval:(id)arg1 forEachAddition:(unk)arg2  ;
-(void)invalidateContentForReason:(id)arg0 ;


@end


#endif