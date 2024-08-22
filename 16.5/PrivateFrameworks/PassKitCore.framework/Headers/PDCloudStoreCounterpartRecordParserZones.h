// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDCLOUDSTORECOUNTERPARTRECORDPARSERZONES_H
#define PDCLOUDSTORECOUNTERPARTRECORDPARSERZONES_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PDCloudStoreCounterpartRecordParserZones : NSObject {
    NSMutableDictionary *_zoneNameToRecords;
}




-(id)allRecords;
-(id)init;
-(void)addRecord:(id)arg0 ;
-(void)enumerateKeysAndObjectsUsingBlock:(id)arg0 ;
-(void)removeIdentifiers:(id)arg0 ;


@end


#endif