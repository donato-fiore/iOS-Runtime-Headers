// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REDATECONTENTPROVIDER_H
#define REDATECONTENTPROVIDER_H

@class NSDate, NSTimeZone;


#import "RETextContentProvider.h"

@interface REDateContentProvider : RETextContentProvider

@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone
@property (readonly, nonatomic) NSUInteger units; // ivar: _units


+(id)dateContentProviderWithDate:(id)arg0 units:(NSUInteger)arg1 timeZone:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributedStringRepresentation;
-(id)clockKitTextProviderRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDate:(id)arg0 units:(NSUInteger)arg1 timeZone:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif