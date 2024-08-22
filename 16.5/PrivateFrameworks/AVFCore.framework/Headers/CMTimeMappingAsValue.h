// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMTIMEMAPPINGASVALUE_H
#define CMTIMEMAPPINGASVALUE_H

@class NSValue;



@interface CMTimeMappingAsValue : NSValue {
    ? _timeMapping;
}




+(BOOL)supportsSecureCoding;
+(id)valueWithCMTimeMapping:(struct ? )arg0 ;
-(BOOL)isEqualToValue:(id)arg0 ;
-(Class)classForCoder;
-(NSUInteger)hash;
-(char *)objCType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(struct ? )CMTimeMappingValue;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getValue:(*void)arg0 ;


@end


#endif