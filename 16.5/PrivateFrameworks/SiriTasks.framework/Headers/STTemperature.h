// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STTEMPERATURE_H
#define STTEMPERATURE_H

@class STSiriModelObject;



@interface STTemperature : STSiriModelObject {
    CGFloat _value;
    NSInteger _units;
}




+(BOOL)supportsSecureCoding;
-(CGFloat)value;
-(NSInteger)units;
-(id)_initWithValue:(CGFloat)arg0 units:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif