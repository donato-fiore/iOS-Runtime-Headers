// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNTIMEPOINT_H
#define MNTIMEPOINT_H

@class NSDate, NSString;
@protocol MNJSONOutput, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface MNTimepoint : NSObject <MNJSONOutput, NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)arriveBy:(id)arg0 ;
+(id)leaveBy:(id)arg0 ;
+(id)leaveNow;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 date:(id)arg1 ;
-(id)jsonDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif