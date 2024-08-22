// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPHYSICALCARDORDERACTIVITYEVENT_H
#define PKPHYSICALCARDORDERACTIVITYEVENT_H

@class NSDate, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPhysicalCardOrderActivityEvent : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSUInteger activity; // ivar: _activity
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy, nonatomic) NSString *localizedReason; // ivar: _localizedReason


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif