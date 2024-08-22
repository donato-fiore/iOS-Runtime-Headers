// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKLOCATIONSORTDESCRIPTOR_H
#define CKLOCATIONSORTDESCRIPTOR_H

@class NSSortDescriptor, CLLocation;
@protocol NSSecureCoding;



@interface CKLocationSortDescriptor : NSSortDescriptor <NSSecureCoding>



@property (readonly, copy, nonatomic) CLLocation *relativeLocation; // ivar: _relativeLocation


+(BOOL)supportsSecureCoding;
-(NSInteger)compareObject:(id)arg0 toObject:(id)arg1 ;
-(id)CKPropertiesDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKey:(id)arg0 relativeLocation:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif