// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PSCONTACTSUGGESTERARCHIVE_H
#define _PSCONTACTSUGGESTERARCHIVE_H

@class NSDate, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _PSContactSuggesterArchive : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSDate *archiveDate; // ivar: _archiveDate
@property (readonly, nonatomic) NSDictionary *contactPriorDictionary; // ivar: _contactPriorDictionary


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithArchiveDate:(id)arg0 contactPriorDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif