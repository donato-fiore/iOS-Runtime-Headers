// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKHISTORICEVENT_H
#define CKHISTORICEVENT_H

@class NSDate, NSString, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKHistoricEvent : NSObject <NSCopying, NSSecureCoding>

 {
    ? identifier;
    ? _firstSeen;
    ? _lastSeen;
    ? _frequency;
    ? _lastDuration;
    ? _totalDuration;
    ? _metadata;
}


@property (nonatomic, readonly) NSDate *firstSeen;
@property (nonatomic, readonly) NSInteger frequency;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) CGFloat lastDuration;
@property (nonatomic, readonly) NSDate *lastSeen;
@property (nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, readonly) CGFloat totalDuration;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)init:(id)arg0 ;
-(id)initFrom:(id)arg0 withIdentifier:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif