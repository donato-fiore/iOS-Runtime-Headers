// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPCONTACTNAMERECORDCHANGERESULT_H
#define PPCONTACTNAMERECORDCHANGERESULT_H

@class NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PPContactNameRecordChangeResult : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSArray *changes; // ivar: _changes
@property (readonly, nonatomic) BOOL changesTruncated; // ivar: _changesTruncated


+(BOOL)supportsSecureCoding;
+(id)contactNameRecordChangeResultWithChanges:(id)arg0 changesTruncated:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToContactNameRecordChangeResult:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithChanges:(id)arg0 changesTruncated:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif