// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVRCRAPPORTDEVICEMANAGER_H
#define _TVRCRAPPORTDEVICEMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _TVRCRapportDeviceManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *deviceRecords; // ivar: _deviceRecords


-(BOOL)createOrUpdateRecordForDevice:(id)arg0 ;
-(id)_identifierForDevice:(id)arg0 ;
-(id)description;
-(id)init;
-(id)recordForDevice:(id)arg0 ;
-(void)_checkIfDuplicateNameButDifferentIDSIdentifier:(id)arg0 device:(id)arg1 ;
-(void)removeDevice:(id)arg0 ;


@end


#endif