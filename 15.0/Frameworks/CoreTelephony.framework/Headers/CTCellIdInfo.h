// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTCELLIDINFO_H
#define CTCELLIDINFO_H

@class NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTCellIdInfo : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSNumber *baseId; // ivar: _baseId
@property (readonly, nonatomic) NSNumber *cellId; // ivar: _cellId


+(BOOL)supportsSecureCoding;
+(id)cellIdInfoFromCellId:(NSUInteger)arg0 baseId:(int)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif