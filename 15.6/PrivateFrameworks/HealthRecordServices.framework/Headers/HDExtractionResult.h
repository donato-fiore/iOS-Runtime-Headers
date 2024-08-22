// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDEXTRACTIONRESULT_H
#define HDEXTRACTIONRESULT_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HDExtractionResult : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *items; // ivar: _items


+(BOOL)supportsSecureCoding;
-(id)clinicalRecords;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItems:(id)arg0 ;
-(id)medicalRecords;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif