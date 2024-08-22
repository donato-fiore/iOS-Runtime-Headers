// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDCLOUDSTORECOUNTERPARTRECORDPARSER_H
#define PDCLOUDSTORECOUNTERPARTRECORDPARSER_H

@class NSMutableDictionary, NSSet;
@protocol PDCloudStoreCounterpartRecordParserDataSource;

#import <Foundation/Foundation.h>


@interface PDCloudStoreCounterpartRecordParser : NSObject {
    NSMutableDictionary *_itemTypeToParserIdentifiers;
    NSSet *_recordNamePrefixes;
    id<PDCloudStoreCounterpartRecordParserDataSource> *_dataSource;
}




-(id)allRecordsForItemType:(NSUInteger)arg0 ;
-(id)allRecordsWithIdentifier:(id)arg0 itemType:(NSUInteger)arg1 ;
-(id)description;
-(id)initWithDataSource:(id)arg0 ;
-(void)addRecords:(id)arg0 ;
-(void)enumerateKeysAndObjectsForItemType:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)removeIdentifiers:(id)arg0 itemType:(NSUInteger)arg1 ;


@end


#endif