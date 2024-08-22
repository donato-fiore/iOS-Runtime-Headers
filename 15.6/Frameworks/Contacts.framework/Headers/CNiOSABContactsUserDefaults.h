// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNIOSABCONTACTSUSERDEFAULTS_H
#define CNIOSABCONTACTSUSERDEFAULTS_H

@class NSMutableDictionary, NSCache;


#import "CNContactsUserDefaults.h"
#import "CNiOSABContactsUserDefaultsABWrapper.h"

@interface CNiOSABContactsUserDefaults : CNContactsUserDefaults

@property (readonly, nonatomic) CNiOSABContactsUserDefaultsABWrapper *abWrapper; // ivar: _abWrapper
@property (retain, nonatomic) NSMutableDictionary *observerCountPerKey; // ivar: _observerCountPerKey
@property (retain, nonatomic) NSCache *valueCache; // ivar: _valueCache


-(BOOL)isShortNameFormatEnabled;
-(BOOL)shortNameFormatPrefersNicknames;
-(NSInteger)displayNameOrder;
-(NSInteger)newContactDisplayNameOrder;
-(NSInteger)shortNameFormat;
-(NSInteger)sortOrder;
-(id)countryCode;
-(id)filteredGroupAndContainerIDs;
-(id)init;
-(id)initWithABWrapper:(id)arg0 ;
-(void)_registerObserverForKey:(id)arg0 ;
-(void)_unregisterObserverForKey:(id)arg0 ;
-(void)addObserver:(id)arg0 forKeyPath:(id)arg1 options:(NSUInteger)arg2 context:(*void)arg3 ;
-(void)dealloc;
-(void)flushCache;
-(void)removeObserver:(id)arg0 forKeyPath:(id)arg1 ;
-(void)setDisplayNameOrder:(NSInteger)arg0 ;
-(void)setFilteredGroupAndContainerIDs:(id)arg0 ;
-(void)setShortNameFormat:(NSInteger)arg0 ;
-(void)setShortNameFormatEnabled:(BOOL)arg0 ;
-(void)setShortNameFormatPrefersNicknames:(BOOL)arg0 ;


@end


#endif