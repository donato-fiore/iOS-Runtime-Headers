// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TLTIMELINEBLOBENTRY_H
#define TLTIMELINEBLOBENTRY_H

@class NSData, NSString, NSDate;
@protocol TLTimelineEntry;

#import <Foundation/Foundation.h>


@interface TLTimelineBlobEntry : NSObject <TLTimelineEntry>



@property (readonly, nonatomic) NSData *blob; // ivar: _blob
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic, setter=tl_setEntryDate:) NSDate *tl_entryDate; // ivar: _tl_entryDate


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)tl_validate:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBlob:(id)arg0 atDate:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif