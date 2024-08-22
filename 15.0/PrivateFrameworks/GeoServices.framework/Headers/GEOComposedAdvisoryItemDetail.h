// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOCOMPOSEDADVISORYITEMDETAIL_H
#define GEOCOMPOSEDADVISORYITEMDETAIL_H

@class NSArray;
@protocol NSSecureCoding, NSCopying, GEOServerFormattedString;

#import <Foundation/Foundation.h>


@interface GEOComposedAdvisoryItemDetail : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSArray *details; // ivar: _details
@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRestrictionDetails:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif