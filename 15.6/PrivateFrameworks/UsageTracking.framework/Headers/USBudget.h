// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef USBUDGET_H
#define USBUDGET_H

@class NSSet, NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface USBudget : NSObject <NSSecureCoding>



@property (readonly, copy) NSSet *bundleIdentifiers; // ivar: _bundleIdentifiers
@property (readonly, copy) NSString *calendarIdentifier; // ivar: _calendarIdentifier
@property (readonly, copy) NSSet *categoryIdentifiers; // ivar: _categoryIdentifiers
@property (readonly, copy) NSString *identifier; // ivar: _identifier
@property (readonly, copy) NSSet *items;
@property (readonly, copy) NSDictionary *schedule; // ivar: _schedule
@property (readonly) NSInteger type; // ivar: _type
@property (readonly, copy) NSSet *webDomains; // ivar: _webDomains


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCategories:(id)arg0 applications:(id)arg1 webDomains:(id)arg2 schedule:(id)arg3 calendarIdentifier:(id)arg4 identifier:(id)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 items:(id)arg1 schedule:(id)arg2 calendarIdentifier:(id)arg3 identifier:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif