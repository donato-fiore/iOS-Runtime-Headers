// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXCANDIDATE_H
#define ATXCANDIDATE_H

@protocol NSCopying, NSSecureCoding, BMStoreData;

#import <Foundation/Foundation.h>


@interface ATXCandidate : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSObject<BMStoreData> *biomeStoreData; // ivar: _biomeStoreData


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXCandidate:(id)arg0 ;
-(NSInteger)suggestionExecutableType;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)detailedDescription;
-(id)identifier;
-(id)init;
-(id)initWithBiomeStoreData:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)type;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif