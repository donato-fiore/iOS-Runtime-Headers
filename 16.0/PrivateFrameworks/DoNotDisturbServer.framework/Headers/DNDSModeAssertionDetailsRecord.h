// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDSMODEASSERTIONDETAILSRECORD_H
#define DNDSMODEASSERTIONDETAILSRECORD_H

@class NSString, NSNumber;
@protocol DNDSModeAssertionStoreRecordDictionaryEncoding;

#import <Foundation/Foundation.h>

#import "DNDSModeAssertionLifetimeRecord.h"

@interface DNDSModeAssertionDetailsRecord : NSObject <DNDSModeAssertionStoreRecordDictionaryEncoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) DNDSModeAssertionLifetimeRecord *lifetime; // ivar: _lifetime
@property (retain, nonatomic) NSNumber *modeConfigurationModifiedDate; // ivar: _modeConfigurationModifiedDate
@property (retain, nonatomic) NSString *modeIdentifier; // ivar: _modeIdentifier
@property (retain, nonatomic) NSString *reason; // ivar: _reason
@property (readonly) Class superclass;
@property (retain, nonatomic) NSNumber *userVisibleEndDate; // ivar: _userVisibleEndDate


+(id)recordForAssertionDetails:(id)arg0 ;
+(id)recordForDictionary:(id)arg0 keys:(struct ? *)arg1 ;
-(id)dictionaryWithKeys:(struct ? *)arg0 options:(NSUInteger)arg1 ;
-(id)object;


@end


#endif