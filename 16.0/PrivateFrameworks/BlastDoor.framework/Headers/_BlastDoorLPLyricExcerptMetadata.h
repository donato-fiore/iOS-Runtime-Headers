// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _BLASTDOORLPLYRICEXCERPTMETADATA_H
#define _BLASTDOORLPLYRICEXCERPTMETADATA_H

@class NSNumber, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _BlastDoorLPLyricExcerptMetadata : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSNumber *endTime; // ivar: _endTime
@property (copy, nonatomic) NSString *language; // ivar: _language
@property (copy, nonatomic) NSString *lyrics; // ivar: _lyrics
@property (retain, nonatomic) NSNumber *startTime; // ivar: _startTime


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif