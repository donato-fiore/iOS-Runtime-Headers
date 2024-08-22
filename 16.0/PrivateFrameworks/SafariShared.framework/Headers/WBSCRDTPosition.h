// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSCRDTPOSITION_H
#define WBSCRDTPOSITION_H

@class NSDictionary, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WBSCRDTPosition : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSArray *sortValues; // ivar: _sortValues


+(BOOL)supportsSecureCoding;
+(id)positionBetweenPosition:(id)arg0 andPosition:(id)arg1 withDeviceIdentifier:(id)arg2 changeID:(NSInteger)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithSortValue:(id)arg0 parentSortValues:(id)arg1 ;
-(id)initWithSortValues:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif