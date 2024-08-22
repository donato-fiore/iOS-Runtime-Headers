// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WPDPERSISTENCE_H
#define WPDPERSISTENCE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WPDPersistence : NSObject

@property (retain, nonatomic) NSString *bootUUID; // ivar: _bootUUID
@property (nonatomic) BOOL isRangingEnabled; // ivar: _isRangingEnabled
@property (nonatomic) BOOL needsInit; // ivar: _needsInit
@property (nonatomic) BOOL systemFirstUnlocked; // ivar: _systemFirstUnlocked


-(BOOL)readBoolPropertyValue:(id)arg0 ;
-(id)currentBootSessionUUID;
-(id)init;
-(id)readStringPropertyValue:(id)arg0 ;
-(void)dealloc;
-(void)deletePropertyValue:(id)arg0 ;
-(void)firstUnlockedWithEvent:(BOOL)arg0 ;
-(void)synchronisePrefs;
-(void)writeBoolProperty:(id)arg0 Value:(BOOL)arg1 ;
-(void)writeStringProperty:(id)arg0 Value:(id)arg1 ;


@end


#endif