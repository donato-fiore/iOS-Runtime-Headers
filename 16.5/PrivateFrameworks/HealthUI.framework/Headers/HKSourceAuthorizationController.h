// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSOURCEAUTHORIZATIONCONTROLLER_H
#define HKSOURCEAUTHORIZATIONCONTROLLER_H

@class HKAuthorizationStore, HKHealthStore, NSArray, NSDictionary, NSSet, HKSource, NSMutableSet;
@protocol HKSourceAuthorizationControllerDelegate;

#import <Foundation/Foundation.h>


@interface HKSourceAuthorizationController : NSObject {
    HKAuthorizationStore *_authorizationStore;
}


@property (readonly, nonatomic) BOOL anyTypeRequested;
@property (weak, nonatomic) NSObject<HKSourceAuthorizationControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (nonatomic) BOOL isUpdatingAllTypes; // ivar: _isUpdatingAllTypes
@property (retain, nonatomic) NSArray *orderedTypesForReading; // ivar: _orderedTypesForReading
@property (retain, nonatomic) NSArray *orderedTypesForSharing; // ivar: _orderedTypesForSharing
@property (retain, nonatomic) NSDictionary *requestedDocumentAuths; // ivar: _requestedDocumentAuths
@property (retain, nonatomic) NSSet *requestedTypesForReading; // ivar: _requestedTypesForReading
@property (retain, nonatomic) NSSet *requestedTypesForSharing; // ivar: _requestedTypesForSharing
@property (readonly, nonatomic) HKSource *source; // ivar: _source
@property (retain, nonatomic) NSMutableSet *typesEnabledForReading; // ivar: _typesEnabledForReading
@property (retain, nonatomic) NSMutableSet *typesEnabledForSharing; // ivar: _typesEnabledForSharing


-(BOOL)_parentTypeDisabledForType:(id)arg0 inSection:(NSInteger)arg1 ;
-(BOOL)allTypesEnabled;
-(BOOL)allTypesEnabledInSection:(NSInteger)arg0 ;
-(BOOL)anyTypeEnabled;
-(BOOL)isRequestingDocumentAuthorization;
-(BOOL)isTypeEnabled:(id)arg0 inSection:(NSInteger)arg1 ;
-(NSInteger)_authorizationStatusWithType:(id)arg0 ;
-(NSUInteger)countOfTypesInSection:(NSInteger)arg0 ;
-(id)_enabledSubTypesForType:(id)arg0 inSection:(NSInteger)arg1 ;
-(id)_enabledTypesInSection:(NSInteger)arg0 ;
-(id)_sortedTypes:(id)arg0 ;
-(id)initWithHealthStore:(id)arg0 source:(id)arg1 typesForSharing:(id)arg2 typesForReading:(id)arg3 ;
-(id)objectAuthorizationStatusesForDocuments;
-(id)typesInSection:(NSInteger)arg0 ;
-(void)_reloadDocumentAuthorizationRecords;
-(void)_reloadTypeAuthorizationRecords;
-(void)_setAuthorizationStatuses:(id)arg0 ;
-(void)_updateAuthorizationStatusWithTypes:(id)arg0 ;
-(void)commitAuthorizationStatuses;
-(void)commitObjectAuthorizationStatuses:(id)arg0 ;
-(void)reload;
-(void)resetObjectAuthorizationStatuses;
-(void)setEnabled:(BOOL)arg0 forAllTypesInSection:(NSInteger)arg1 commit:(BOOL)arg2 ;
-(void)setEnabled:(BOOL)arg0 forType:(id)arg1 inSection:(NSInteger)arg2 commit:(BOOL)arg3 ;


@end


#endif