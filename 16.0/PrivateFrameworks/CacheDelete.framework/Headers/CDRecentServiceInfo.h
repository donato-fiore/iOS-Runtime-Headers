// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDRECENTSERVICEINFO_H
#define CDRECENTSERVICEINFO_H

@class NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CDRecentServiceInfo : NSObject <NSSecureCoding, NSCopying>

 {
    ? recentinfo;
}


@property (retain, nonatomic) NSDictionary *itemizedNonPurgeable; // ivar: _itemizedNonPurgeable


+(BOOL)supportsSecureCoding;
+(id)CDRecentServiceInfo:(id)arg0 atUrgency:(int)arg1 withTimestamp:(CGFloat)arg2 nonPurgeableAmount:(id)arg3 ;
-(BOOL)isEmpty;
-(BOOL)updateAmount:(id)arg0 atUrgency:(int)arg1 withTimestamp:(CGFloat)arg2 nonPurgeableAmount:(id)arg3 deductFromCurrentAmount:(BOOL)arg4 ;
-(BOOL)validate:(CGFloat)arg0 atUrgency:(int)arg1 ;
-(id)amountAtUrgency:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAmount:(id)arg0 atUrgency:(int)arg1 withTimestamp:(CGFloat)arg2 nonPurgeableAmount:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)nonPurgeableAmount;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)log;


@end


#endif