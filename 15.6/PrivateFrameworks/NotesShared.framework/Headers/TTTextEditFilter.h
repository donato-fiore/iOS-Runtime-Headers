// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TTTEXTEDITFILTER_H
#define TTTEXTEDITFILTER_H

@class NSSet, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TTTextEditFilter : NSObject <NSCopying>



@property (copy, nonatomic) NSSet *allowedAttachmentIDs; // ivar: _allowedAttachmentIDs
@property (copy, nonatomic) NSSet *allowedUserIDs; // ivar: _allowedUserIDs
@property (nonatomic) BOOL allowsMissingTimestamps; // ivar: _allowsMissingTimestamps
@property (nonatomic) BOOL allowsMissingUsers; // ivar: _allowsMissingUsers
@property (copy, nonatomic) NSDate *fromDate; // ivar: _fromDate
@property (copy, nonatomic) NSDate *toDate; // ivar: _toDate


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif