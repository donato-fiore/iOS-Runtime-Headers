// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKPIGMENTPREFERENCEMANAGER_H
#define NTKPIGMENTPREFERENCEMANAGER_H

@class NSSet, NSString, NPSDomainAccessor, NSUserDefaults;
@protocol NTKPigmentPreferenceManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NTKPigmentPreferenceManager : NSObject {
    _opaque_pthread_rwlock_t _rwlock;
}


@property (copy, nonatomic) NSSet *autoSelectedPigments; // ivar: _autoSelectedPigments
@property (weak, nonatomic) NSObject<NTKPigmentPreferenceManagerDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *domain; // ivar: _domain
@property (retain, nonatomic) NPSDomainAccessor *npsDomainAccessor; // ivar: _npsDomainAccessor
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateQueue; // ivar: _privateQueue
@property (copy, nonatomic) NSSet *selectedPigments; // ivar: _selectedPigments
@property (retain, nonatomic) NSUserDefaults *userDefault; // ivar: _userDefault


+(BOOL)_shouldSaveAutoSelectedPigments:(id)arg0 forCollectionName:(id)arg1 userDefault:(id)arg2 ;
-(BOOL)_threadunsafe_isOptionVisible:(id)arg0 ;
-(BOOL)isOptionVisible:(id)arg0 ;
-(id)init;
-(id)initWithDomain:(id)arg0 ;
-(void)_loadAutoSelectedPigments;
-(void)_loadVisibleOptions;
-(void)_threadunsafe_appendAutoSelectPigments:(id)arg0 ;
-(void)_threadunsafe_removeAllAutoSelectPigments;
-(void)_threadunsafe_removeAutoSelectionWithOptionName:(id)arg0 ;
-(void)_threadunsafe_setOptionName:(id)arg0 visible:(BOOL)arg1 ;
-(void)_threadunsafe_setOptionName:(id)arg0 visible:(BOOL)arg1 manual:(BOOL)arg2 ;
-(void)_threadunsafe_syncAllContent;
-(void)_threadunsafe_syncAutoSelectedPigments:(id)arg0 ;
-(void)_threadunsafe_syncVisibleOptionsByCollection:(id)arg0 ;
-(void)dealloc;
-(void)resetContent;
-(void)setOption:(id)arg0 visible:(BOOL)arg1 ;


@end


#endif