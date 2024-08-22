// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSPANALYTICSWINDDOWNEVENTDATA_H
#define HKSPANALYTICSWINDDOWNEVENTDATA_H

@class NSString;
@protocol NSCoding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKSPAnalyticsWindDownEventData : NSObject <NSCoding, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger action; // ivar: _action
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL wasCollected; // ivar: _wasCollected
@property (readonly, nonatomic) BOOL wasUsed; // ivar: _wasUsed


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualEventData:(id)arg0 ;
-(NSUInteger)hash;
-(id)collectedEventDataCopy;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWindDownAction:(NSUInteger)arg0 wasUsed:(BOOL)arg1 identifier:(id)arg2 ;
-(id)initWithWindDownAction:(NSUInteger)arg0 wasUsed:(BOOL)arg1 identifier:(id)arg2 wasCollected:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif