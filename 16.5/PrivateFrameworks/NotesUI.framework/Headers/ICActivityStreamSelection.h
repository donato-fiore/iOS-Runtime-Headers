// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICACTIVITYSTREAMSELECTION_H
#define ICACTIVITYSTREAMSELECTION_H

@class NSDate, NSData, TTTextEditFilter, NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ICActivityStreamSelection : NSObject <NSCopying>



@property (copy, nonatomic) NSDate *displayDate; // ivar: _displayDate
@property (readonly, copy, nonatomic) NSData *encodedData;
@property (copy, nonatomic) TTTextEditFilter *filter; // ivar: _filter
@property (copy, nonatomic) NSSet *itemIDs; // ivar: _itemIDs


+(id)objc_selectionFromData:(id)arg0 ;
+(id)selectionFromData:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithFilter:(id)arg0 displayDate:(id)arg1 ;
-(id)initWithItemIDs:(id)arg0 filter:(id)arg1 displayDate:(id)arg2 ;
-(id)initWithMentions:(id)arg0 ;
-(id)objc_initWithMentions:(id)arg0 ;


@end


#endif