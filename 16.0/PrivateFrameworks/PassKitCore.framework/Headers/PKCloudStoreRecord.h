// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCLOUDSTORERECORD_H
#define PKCLOUDSTORERECORD_H

@class NSMutableDictionary, NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface PKCloudStoreRecord : NSObject {
    NSMutableDictionary *_records;
}


@property (copy, nonatomic) NSDictionary *cloudStoreSpecificKeys; // ivar: _cloudStoreSpecificKeys
@property (readonly, nonatomic) NSArray *records;


-(id)description;
-(id)initWithRecords:(id)arg0 ;
-(id)recordsWithRecordType:(id)arg0 ;
-(void)addRecord:(id)arg0 ;


@end


#endif