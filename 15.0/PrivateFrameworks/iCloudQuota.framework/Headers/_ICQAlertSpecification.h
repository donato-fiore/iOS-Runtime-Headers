// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ICQALERTSPECIFICATION_H
#define _ICQALERTSPECIFICATION_H

@class NSDictionary, NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _ICQAlertSpecification : NSObject {
    NSDictionary *_serverDict;
}


@property (retain, nonatomic) NSString *altLockScreenMessage; // ivar: _altLockScreenMessage
@property (retain, nonatomic) NSString *altMessage; // ivar: _altMessage
@property (nonatomic) NSInteger defaultButtonIndex; // ivar: _defaultButtonIndex
@property (nonatomic) BOOL disableLockScreenAlert; // ivar: _disableLockScreenAlert
@property (retain) NSMutableDictionary *linkForButtonIndex; // ivar: _linkForButtonIndex
@property (retain, nonatomic) NSString *lockScreenMessage; // ivar: _lockScreenMessage
@property (retain, nonatomic) NSString *lockScreenTitle; // ivar: _lockScreenTitle
@property (retain, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) NSDictionary *serverDict;
@property (retain, nonatomic) NSString *title; // ivar: _title


+(id)alertSpecificationDictionarySampleForLevel:(NSInteger)arg0 ;
+(id)alertSpecificationSampleForLevel:(NSInteger)arg0 ;
-(id)init;
-(id)initWithServerDictionary:(id)arg0 ;
-(id)linkForButtonIndex:(NSInteger)arg0 ;
-(void)_setLinks:(id)arg0 defaultIndex:(NSUInteger)arg1 ;
-(void)setLink:(id)arg0 forButtonIndex:(NSInteger)arg1 ;
-(void)setLink:(id)arg0 forButtonIndex:(NSInteger)arg1 defaultButton:(BOOL)arg2 ;


@end


#endif