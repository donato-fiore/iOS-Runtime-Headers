// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FMTIMEDMETADATAITEM_H
#define FMTIMEDMETADATAITEM_H

@class NSString, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FMTimedMetadataItem : NSObject <NSCopying>



@property (readonly) NSString *identifier; // ivar: _identifier
@property (readonly) NSString *name; // ivar: _name
@property (readonly) ? timeRange; // ivar: _timeRange
@property (readonly) NSDictionary *values; // ivar: _values


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 timeRange:(struct ? )arg2 values:(id)arg3 ;
-(void)adjustDurationTo:(struct ? )arg0 ;


@end


#endif