// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSUMMARYSHARINGENTRY_H
#define HDSUMMARYSHARINGENTRY_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "HDCodableSummarySharingEntry.h"

@interface HDSummarySharingEntry : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *CNContactIdentifier; // ivar: _CNContactIdentifier
@property (readonly, nonatomic) HDCodableSummarySharingEntry *codableEntry; // ivar: _codableEntry
@property (readonly, nonatomic) BOOL isPaused; // ivar: _isPaused


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCodableEntry:(id)arg0 CNContactIdentifier:(id)arg1 isPaused:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)sharingEntry;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif