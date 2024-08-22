// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTRATSELECTION_H
#define CTRATSELECTION_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTRatSelection : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) unsigned char mask; // ivar: _mask
@property (retain, nonatomic) NSString *preferred; // ivar: _preferred
@property (retain, nonatomic) NSString *selection; // ivar: _selection


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif