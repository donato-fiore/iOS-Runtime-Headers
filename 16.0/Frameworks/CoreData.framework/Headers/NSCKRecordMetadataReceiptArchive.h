// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSCKRECORDMETADATARECEIPTARCHIVE_H
#define NSCKRECORDMETADATARECEIPTARCHIVE_H

@class NSMutableDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSCKRecordMetadataReceiptArchive : NSObject <NSSecureCoding>

 {
    NSMutableDictionary *_zoneIDToArchivedReceipts;
}




+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithReceiptsToEncode:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateArchivedRecordIDsUsingBlock:(id)arg0 ;


@end


#endif