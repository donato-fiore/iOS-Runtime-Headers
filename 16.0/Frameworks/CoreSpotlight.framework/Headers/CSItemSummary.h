// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSITEMSUMMARY_H
#define CSITEMSUMMARY_H

@class NSString, NSArray, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CSSearchableItem.h"

@interface CSItemSummary : NSObject <NSCopying, NSSecureCoding>

 {
    NSString *_type;
    NSString *_name;
    NSString *_contactIdentifier;
    NSArray *_alternateNames;
    NSArray *_phoneNumbers;
    NSArray *_emailAddresses;
    NSArray *_allEmailAddresses;
    NSInteger _contactScope;
    NSDate *_dateFrom;
    NSDate *_dateTo;
    NSString *_textQuery;
    NSInteger _textScope;
    NSInteger _statusValue;
    NSString *_attachmentQuery;
    NSInteger _attachmentScope;
}


@property (readonly, nonatomic) CSSearchableItem *sourceItem; // ivar: _sourceItem
@property (readonly, nonatomic) NSString *type;


+(BOOL)supportsSecureCoding;
-(NSInteger)attachmentScope;
-(NSInteger)contactScope;
-(NSInteger)statusValue;
-(NSInteger)textScope;
-(id)allEmailAddresses;
-(id)alternateNames;
-(id)attachmentQuery;
-(id)contactIdentifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dateFrom;
-(id)dateTo;
-(id)emailAddresses;
-(id)initWithAttachmentQuery:(id)arg0 attachmentScope:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDateFrom:(id)arg0 dateTo:(id)arg1 ;
-(id)initWithItemSummary:(id)arg0 newContactScope:(NSInteger)arg1 ;
-(id)initWithItemSummaryType:(id)arg0 ;
-(id)initWithName:(id)arg0 contactIdentifier:(id)arg1 alternateNames:(id)arg2 phoneNumbers:(id)arg3 emailAddresses:(id)arg4 allEmailAddresses:(id)arg5 contactScope:(NSInteger)arg6 ;
-(id)initWithName:(id)arg0 contactIdentifier:(id)arg1 alternateNames:(id)arg2 phoneNumbers:(id)arg3 emailAddresses:(id)arg4 contactScope:(NSInteger)arg5 ;
-(id)initWithStatus:(NSInteger)arg0 ;
-(id)initWithTextQuery:(id)arg0 textScope:(NSInteger)arg1 ;
-(id)name;
-(id)phoneNumbers;
-(id)textQuery;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif