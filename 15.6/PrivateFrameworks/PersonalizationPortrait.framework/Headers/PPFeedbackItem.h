// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPFEEDBACKITEM_H
#define PPFEEDBACKITEM_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PPFeedbackItem : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) unsigned int itemFeedbackType; // ivar: _itemFeedbackType
@property (readonly, nonatomic) NSString *itemString; // ivar: _itemString


+(BOOL)supportsSecureCoding;
+(id)stringForItemFeedbackType:(unsigned int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPPFeedbackItem:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItemString:(id)arg0 itemFeedbackType:(unsigned int)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif