// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CDUSERACTIVITY_H
#define _CDUSERACTIVITY_H

@class NSString, NSDate, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _CDUserActivity : NSObject <NSSecureCoding>



@property (copy) NSString *bundleId; // ivar: _bundleId
@property (copy) NSDate *date; // ivar: _date
@property (copy) NSDictionary *payload; // ivar: _payload
@property (copy) NSString *title; // ivar: _title
@property (copy) NSString *type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)createFromUserActivity:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif