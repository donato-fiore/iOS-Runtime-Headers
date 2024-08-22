// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPSCOREDCONTACTHANDLE_H
#define PPSCOREDCONTACTHANDLE_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PPScoredContactHandle : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *contactHandle; // ivar: _contactHandle
@property (readonly, nonatomic) CGFloat score; // ivar: _score


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToScoredContactHandle:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSInteger)reverseCompare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContactHandle:(id)arg0 score:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif