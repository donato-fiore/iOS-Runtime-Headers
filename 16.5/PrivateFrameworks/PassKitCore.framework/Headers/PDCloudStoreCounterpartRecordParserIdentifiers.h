// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDCLOUDSTORECOUNTERPARTRECORDPARSERIDENTIFIERS_H
#define PDCLOUDSTORECOUNTERPARTRECORDPARSERIDENTIFIERS_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PDCloudStoreCounterpartRecordParserIdentifiers : NSObject {
    NSMutableDictionary *_identifierToParserZones;
}




-(id)allRecords;
-(id)allRecordsWithIdentifier:(id)arg0 ;
-(id)description;
-(id)init;
-(void)addRecord:(id)arg0 identifier:(id)arg1 ;
-(void)enumerateKeysAndObjectsUsingBlock:(id)arg0 ;
-(void)removeIdentifiers:(id)arg0 ;


@end


#endif