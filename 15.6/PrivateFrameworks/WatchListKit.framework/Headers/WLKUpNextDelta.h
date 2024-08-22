// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLKUPNEXTDELTA_H
#define WLKUPNEXTDELTA_H

@class NSDictionary, NSArray, NSDate;
@protocol WLKMergeableCoding;

#import <Foundation/Foundation.h>


@interface WLKUpNextDelta : NSObject <WLKMergeableCoding>

 {
    NSDictionary *_backingDictionary;
}


@property (readonly, copy, nonatomic) NSArray *additions;
@property (readonly, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, copy, nonatomic) NSArray *items; // ivar: _items
@property (readonly, copy, nonatomic) NSArray *removals;
@property (readonly, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
+(id)useWidgetImagesIfAvailable:(id)arg0 ;
-(BOOL)isExpired;
-(id)_deltaByMergingItemsFromDelta:(id)arg0 ;
-(id)dataByMergingWith:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif