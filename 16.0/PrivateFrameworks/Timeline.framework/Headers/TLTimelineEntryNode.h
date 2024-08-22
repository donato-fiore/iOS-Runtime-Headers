// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TLTIMELINEENTRYNODE_H
#define TLTIMELINEENTRYNODE_H

@class NSDate;
@protocol TLTimelineEntry;


#import "TLTimelineNode.h"

@interface TLTimelineEntryNode : TLTimelineNode

@property (readonly, copy, nonatomic) NSDate *date;
@property (retain, nonatomic) NSObject<TLTimelineEntry> *entry; // ivar: _entry


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)leftEntryNode;
-(id)rightEntryNode;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif