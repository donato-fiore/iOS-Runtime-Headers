// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKCLASSKITCHANGENOTIFIER_H
#define CRKCLASSKITCHANGENOTIFIER_H

@class NSSet;
@protocol CRKClassKitChangeNotifierDelegate, CRKClassKitRosterRequirements;

#import <Foundation/Foundation.h>


@interface CRKClassKitChangeNotifier : NSObject

@property (weak, nonatomic) NSObject<CRKClassKitChangeNotifierDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) id *generalObserverToken; // ivar: _generalObserverToken
@property (copy, nonatomic) NSSet *observedTrustedPersonIDs; // ivar: _observedTrustedPersonIDs
@property (readonly, nonatomic) NSObject<CRKClassKitRosterRequirements> *requirements; // ivar: _requirements
@property (retain, nonatomic) id *trustedPersonObserverToken; // ivar: _trustedPersonObserverToken


-(BOOL)updateObservedTrustedPersonIDsWithRoster:(id)arg0 ;
-(id)initWithRequirements:(id)arg0 ;
-(id)makeObserverBlock:(SEL)arg0 ;
-(id)trustedPersonIDsInRoster:(id)arg0 ;
-(void)dataChanged;
-(void)dealloc;
-(void)startObservingGeneralChanges;
-(void)stopObservingGeneralChanges;
-(void)stopObservingTrustedPersons;


@end


#endif