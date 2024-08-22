// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKPREFERENCEOBSERVER_H
#define WKPREFERENCEOBSERVER_H


#import <Foundation/Foundation.h>


@interface WKPreferenceObserver : NSObject {
    Vector<WTF::RetainPtr<WKUserDefaults>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> m_userDefaults;
}




+(id)sharedInstance;
-(id)init;
-(void)preferenceDidChange:(id)arg0 key:(id)arg1 encodedValue:(id)arg2 ;


@end


#endif