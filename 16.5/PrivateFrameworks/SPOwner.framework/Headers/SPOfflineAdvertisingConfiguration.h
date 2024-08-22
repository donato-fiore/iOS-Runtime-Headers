// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPOFFLINEADVERTISINGCONFIGURATION_H
#define SPOFFLINEADVERTISINGCONFIGURATION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPOfflineAdvertisingConfiguration : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger longIntervalCount; // ivar: _longIntervalCount
@property (nonatomic) NSInteger shortIntervalCount; // ivar: _shortIntervalCount


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithShortIntervalCount:(NSInteger)arg0 longIntervalCount:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif