// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSPREDEFINEDVALUE_H
#define ICSPREDEFINEDVALUE_H

@class NSNumber;



@interface ICSPredefinedValue : NSNumber {
    NSInteger _value;
}




+(BOOL)supportsSecureCoding;
+(id)numberWithLong:(NSInteger)arg0 ;
-(Class)classForCoder;
-(NSInteger)longValue;
-(char *)objCType;
-(id)initWithBytes:(*void)arg0 objCType:(char *)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLong:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getValue:(*void)arg0 ;


@end


#endif