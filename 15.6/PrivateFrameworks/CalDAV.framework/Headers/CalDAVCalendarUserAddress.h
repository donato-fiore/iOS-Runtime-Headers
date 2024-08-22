// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALDAVCALENDARUSERADDRESS_H
#define CALDAVCALENDARUSERADDRESS_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface CalDAVCalendarUserAddress : NSObject

@property (retain, nonatomic) NSURL *address; // ivar: _address
@property NSInteger preferred; // ivar: _preferred


+(BOOL)compareAddressURL:(id)arg0 localString:(id)arg1 ;
+(BOOL)compareAddressURL:(id)arg0 localURL:(id)arg1 ;
+(NSInteger)defaultPreferredAttribute;
+(id)_minPreferredAddress:(id)arg0 ;
+(id)_preferredAddressNoPreferred:(id)arg0 ;
+(id)packCalDAVUserAdress:(id)arg0 ;
+(id)preferredAddress:(id)arg0 ;
+(id)unpackCalDAVUserAdress:(id)arg0 ;
-(BOOL)isSameAsUserAddressURL:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)initWithAddress:(id)arg0 preferred:(NSInteger)arg1 ;


@end


#endif