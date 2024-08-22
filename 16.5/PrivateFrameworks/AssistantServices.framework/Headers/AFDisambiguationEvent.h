// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFDISAMBIGUATIONEVENT_H
#define AFDISAMBIGUATIONEVENT_H

@class NSDate, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFDisambiguationEvent : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (copy, nonatomic) NSString *itemIdentifier; // ivar: _itemIdentifier
@property (nonatomic) NSInteger selectionType; // ivar: _selectionType


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif