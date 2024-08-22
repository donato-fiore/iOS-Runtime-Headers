// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPLASTONLINELOCATIONINFO_H
#define SPLASTONLINELOCATIONINFO_H

@class NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SPLastOnlineLocationInfo : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (copy, nonatomic) NSDate *updatedOn; // ivar: _updatedOn


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDate:(id)arg0 updatedOn:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif