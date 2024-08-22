// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWPHOTODESCRIPTOR_H
#define BWPHOTODESCRIPTOR_H

@class NSDate, NSTimeZone, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BWPhotoDescriptor : NSObject <NSSecureCoding>

 {
    NSDate *_time;
    BOOL _timeHasBeenSet;
    NSTimeZone *_timeZone;
    BOOL _timeZoneHasBeenSet;
    ? _presentationTimeStamp;
    BOOL _presentationTimeStampHasBeenSet;
}


@property (readonly, nonatomic) NSString *photoIdentifier; // ivar: _photoIdentifier
@property (nonatomic) ? presentationTimeStamp;
@property (readonly, nonatomic) unsigned int processingFlags; // ivar: _processingFlags
@property (retain, nonatomic) NSDate *time;
@property (retain, nonatomic) NSTimeZone *timeZone;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPhotoIdentifier:(id)arg0 processingFlags:(unsigned int)arg1 ;
-(id)initWithPhotoIdentifier:(id)arg0 processingFlags:(unsigned int)arg1 time:(id)arg2 timeZone:(id)arg3 presentationTimeStamp:(struct ? )arg4 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif