// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDSMODECONFIGURATIONSRECORDDIFF_H
#define DNDSMODECONFIGURATIONSRECORDDIFF_H

@class NSArray, CKRecordZone;

#import <Foundation/Foundation.h>

#import "DNDSModeConfigurationsRecord.h"

@interface DNDSModeConfigurationsRecordDiff : NSObject

@property (readonly, copy, nonatomic) NSArray *modifiedIDs; // ivar: _modifiedIDs
@property (readonly, copy, nonatomic) DNDSModeConfigurationsRecord *original; // ivar: _original
@property (readonly, copy, nonatomic) NSArray *removedIDs; // ivar: _removedIDs
@property (readonly, copy, nonatomic) DNDSModeConfigurationsRecord *updated; // ivar: _updated
@property (readonly, copy, nonatomic) CKRecordZone *zone; // ivar: _zone


-(id)_modifiedConfigurations;
-(id)_recordIDsInModeConfigurations:(id)arg0 ;
-(id)_removedConfigurations;
-(id)initWithOriginalModeConfigurations:(id)arg0 updatedModeConfigurations:(id)arg1 zone:(id)arg2 ;
-(void)_generateDiff;


@end


#endif