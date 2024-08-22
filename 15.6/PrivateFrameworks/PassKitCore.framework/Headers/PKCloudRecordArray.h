// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKCLOUDRECORDARRAY_H
#define PKCLOUDRECORDARRAY_H

@class NSMutableDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKCloudRecordArray : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSMutableDictionary *cloudRecordByDatabase; // ivar: _cloudRecordByDatabase


+(BOOL)supportsSecureCoding;
-(NSInteger)count;
-(id)_descriptionWithDetailedOutput:(BOOL)arg0 includeItem:(BOOL)arg1 ;
-(id)allItems;
-(id)allObjects;
-(id)allObjectsByDatabaseIdentifier;
-(id)allRecordIDs;
-(id)allRecordNames;
-(id)allRecordsWithRecordType:(id)arg0 ;
-(id)description;
-(id)descriptionWithItem:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)addCloudRecord:(id)arg0 forContainerDatabaseIdentifier:(id)arg1 ;
-(void)applyCloudRecordArray:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif