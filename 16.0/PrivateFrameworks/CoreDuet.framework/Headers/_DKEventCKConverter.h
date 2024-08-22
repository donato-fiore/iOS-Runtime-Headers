// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DKEVENTCKCONVERTER_H
#define _DKEVENTCKCONVERTER_H

@class CKRecordZoneID;

#import <Foundation/Foundation.h>


@interface _DKEventCKConverter : NSObject {
    CKRecordZoneID *_zoneID;
}




-(id)eventIDsFromRecordIDsAndTypes:(id)arg0 ;
-(id)eventsFromRecords:(id)arg0 ;
-(id)initWithZoneID:(id)arg0 ;
-(id)recordIDsFromEventIDs:(id)arg0 ;
-(id)recordsFromEvents:(id)arg0 ;


@end


#endif