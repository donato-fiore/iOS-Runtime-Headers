// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RETIMECONTENTPROVIDER_H
#define RETIMECONTENTPROVIDER_H

@class NSDate, NSTimeZone;


#import "RETextContentProvider.h"

@interface RETimeContentProvider : RETextContentProvider

@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone


+(id)timeContentProviderWithDate:(id)arg0 timeZone:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributedStringRepresentation;
-(id)clockKitTextProviderRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDate:(id)arg0 timeZone:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif