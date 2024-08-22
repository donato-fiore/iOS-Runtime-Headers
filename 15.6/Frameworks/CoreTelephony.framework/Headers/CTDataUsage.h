// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CTDATAUSAGE_H
#define CTDATAUSAGE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTDataUsage : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSUInteger cellularHome; // ivar: _cellularHome
@property (nonatomic) NSUInteger cellularRoaming; // ivar: _cellularRoaming
@property (nonatomic) NSUInteger wifi; // ivar: _wifi


+(BOOL)supportsSecureCoding;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHome:(NSUInteger)arg0 roaming:(NSUInteger)arg1 wifi:(NSUInteger)arg2 ;
-(void)addUsage:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif