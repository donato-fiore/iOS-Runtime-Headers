// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLLIBRARYSTATE_H
#define CPLLIBRARYSTATE_H

@class NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CPLLibraryState : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSDate *deleteDate; // ivar: _deleteDate
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (copy, nonatomic) NSDate *disabledDate; // ivar: _disabledDate


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif