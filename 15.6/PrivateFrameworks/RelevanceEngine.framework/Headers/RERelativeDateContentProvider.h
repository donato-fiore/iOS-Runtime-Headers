// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RERELATIVEDATECONTENTPROVIDER_H
#define RERELATIVEDATECONTENTPROVIDER_H

@class NSDate;


#import "RETextContentProvider.h"

@interface RERelativeDateContentProvider : RETextContentProvider

@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (readonly, nonatomic) NSUInteger units; // ivar: _units


+(id)relativeDateContentProviderWithDate:(id)arg0 style:(NSInteger)arg1 units:(NSUInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributedStringRepresentation;
-(id)clockKitTextProviderRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDate:(id)arg0 style:(NSInteger)arg1 units:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif