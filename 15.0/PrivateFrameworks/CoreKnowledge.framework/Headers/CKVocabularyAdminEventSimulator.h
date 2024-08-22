// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVOCABULARYADMINEVENTSIMULATOR_H
#define CKVOCABULARYADMINEVENTSIMULATOR_H

@protocol CKVAdminService;

#import <Foundation/Foundation.h>


@interface CKVocabularyAdminEventSimulator : NSObject {
    NSObject<CKVAdminService> *_adminService;
    CGFloat _timeout;
    BOOL _simulationFinished;
}




-(NSInteger)finish;
-(id)initWithAdminService:(id)arg0 ;
-(id)initWithAdminService:(id)arg0 timeout:(CGFloat)arg1 ;
-(void)_handleEvent:(unsigned short)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)triggerEventAddressBookChanged:(id)arg0 ;
-(void)triggerEventHomeKitChanged:(id)arg0 ;
-(void)triggerEventINVocabularyChanged:(id)arg0 ;
-(void)triggerEventIndexMaintenance:(id)arg0 ;
-(void)triggerEventLSApplicationChanged:(id)arg0 ;
-(void)triggerEventMediaLibraryChanged:(id)arg0 ;
-(void)triggerEventMigration:(id)arg0 ;
-(void)triggerEventSiriLanguageCodeChanged:(id)arg0 ;
-(void)triggerEventSiriSettingsChanged:(id)arg0 ;


@end


#endif