// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSPERSITEPREFERENCEMANAGER_H
#define WBSPERSITEPREFERENCEMANAGER_H

@class NSString;
@protocol WBSPerSitePreferenceManager, WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceManagerDelegate, WBSPerSitePreferenceManagerStorageDelegate;

#import <Foundation/Foundation.h>


@interface WBSPerSitePreferenceManager : NSObject <WBSPerSitePreferenceManager>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WBSPerSitePreferenceManagerDefaultsDelegate> *defaultsDelegate; // ivar: _defaultsDelegate
@property (weak, nonatomic) NSObject<WBSPerSitePreferenceManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<WBSPerSitePreferenceManagerStorageDelegate> *storageDelegate; // ivar: _storageDelegate
@property (readonly) Class superclass;


-(id)_validatePreferenceValue:(id)arg0 inPreference:(id)arg1 ;
-(id)localizedStringForValue:(id)arg0 inPreference:(id)arg1 ;
-(id)preferences;
-(id)valuesForPreference:(id)arg0 ;
-(void)_recursivelySetDefaultPreferenceValues:(id)arg0 orderedKeys:(id)arg1 currentIndex:(NSInteger)arg2 existingResult:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)didUpdatePreference:(id)arg0 toValue:(id)arg1 forDomain:(id)arg2 ;
-(void)getAllDomainsConfiguredForPreference:(id)arg0 usingBlock:(id)arg1 ;
-(void)getDefaultPreferenceValueForPreference:(id)arg0 completionHandler:(id)arg1 ;
-(void)getValueOfPreference:(id)arg0 forDomain:(id)arg1 withTimeout:(id)arg2 usingBlock:(id)arg3 ;
-(void)removePreferenceValuesForDomains:(id)arg0 fromPreference:(id)arg1 completionHandler:(id)arg2 ;
-(void)setDefaultPreferenceValues:(id)arg0 completionHandler:(id)arg1 ;
-(void)setDefaultValue:(id)arg0 ofPreference:(id)arg1 completionHandler:(id)arg2 ;
-(void)setValue:(id)arg0 ofPreference:(id)arg1 forDomain:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif