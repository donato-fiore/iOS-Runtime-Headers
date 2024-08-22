// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSLPRFTWOWAYSYNCSETTING_H
#define CSLPRFTWOWAYSYNCSETTING_H

@class NPSDomainAccessor, NPSManager, NSString;
@protocol CSLPRFTwoWaySyncSettingDelegate;

#import <Foundation/Foundation.h>


@interface CSLPRFTwoWaySyncSetting : NSObject {
    int _notifyToken;
    char * _notificationName;
    NPSDomainAccessor *_domainAccessor;
    NPSManager *_syncManager;
}


@property (readonly, nonatomic) id *defaultValue; // ivar: _defaultValue
@property (weak, nonatomic) NSObject<CSLPRFTwoWaySyncSettingDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) id *value;


-(id)description;
-(id)domainAccessor;
-(id)initWithKey:(id)arg0 defaultValue:(id)arg1 notification:(char *)arg2 ;
-(id)safeValueOfType:(Class)arg0 ;
-(id)syncManager;
-(void)dealloc;
-(void)handleDidUnpair;
-(void)migrate:(id)arg0 withMapping:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif