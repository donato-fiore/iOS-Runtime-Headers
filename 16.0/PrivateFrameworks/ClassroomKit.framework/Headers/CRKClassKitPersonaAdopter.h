// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKCLASSKITPERSONAADOPTER_H
#define CRKCLASSKITPERSONAADOPTER_H

@class NSString, NSMutableArray;
@protocol CRKPersonaBlockPerforming;

#import <Foundation/Foundation.h>

#import "CRKClassKitCurrentUserProvider.h"

@interface CRKClassKitPersonaAdopter : NSObject

@property (copy, nonatomic) NSString *currentPersonaUniqueString; // ivar: _currentPersonaUniqueString
@property (readonly, nonatomic) CRKClassKitCurrentUserProvider *currentUserProvider; // ivar: _currentUserProvider
@property (readonly, nonatomic) NSObject<CRKPersonaBlockPerforming> *personaBlockPerformer; // ivar: _personaBlockPerformer
@property (readonly, nonatomic) NSMutableArray *stashedBlocks; // ivar: _stashedBlocks


-(BOOL)personaFetched;
-(id)captureStashedBlocks;
-(id)initWithClassKitFacade:(id)arg0 personaBlockPerformer:(id)arg1 ;
-(void)callStashedBlocks;
-(void)callStashedBlocksIfPersonaFetched;
-(void)currentUserChanged;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)performBlockWithClassKitPersona:(id)arg0 ;


@end


#endif