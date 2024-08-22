// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKUSERDEFAULTS_H
#define WKUSERDEFAULTS_H

@class NSUserDefaults;



@interface WKUserDefaults : NSUserDefaults {
    RetainPtr<NSString> m_suiteName;
    WeakObjCPtr<WKPreferenceObserver> m_observer;
}




-(id)initWithSuiteName:(id)arg0 ;
-(void)_notifyObserversOfChangeFromValuesForKeys:(id)arg0 toValuesForKeys:(id)arg1 ;
-(void)findPreferenceChangesAndNotifyForKeys:(id)arg0 toValuesForKeys:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif