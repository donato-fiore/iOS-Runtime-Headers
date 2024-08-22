// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMHASHTAGLABEL_H
#define REMHASHTAGLABEL_H

@class NSString, NSDate, NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface REMHashtagLabel : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *canonicalName; // ivar: _canonicalName
@property (readonly, nonatomic) NSDate *firstOccurrenceCreationDate; // ivar: _firstOccurrenceCreationDate
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSDate *recencyDate; // ivar: _recencyDate
@property (readonly, nonatomic) NSUUID *uuidForChangeTracking; // ivar: _uuidForChangeTracking


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToHashtagLabel:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 canonicalName:(id)arg1 firstOccurrenceCreationDate:(id)arg2 recencyDate:(id)arg3 uuidForChangeTracking:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif