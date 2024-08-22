// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSCOLLECTIONSTATUS_H
#define TPSCOLLECTIONSTATUS_H

@class NSDate, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TPSCollectionStatus : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSDate *activatedDate; // ivar: _activatedDate
@property (nonatomic) BOOL canNotify; // ivar: _canNotify
@property (copy, nonatomic) NSDate *featuredDate; // ivar: _featuredDate
@property (copy, nonatomic) NSDate *firstViewedDate; // ivar: _firstViewedDate
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif