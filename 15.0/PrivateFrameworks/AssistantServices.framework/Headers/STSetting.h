// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STSETTING_H
#define STSETTING_H



#import "STSiriModelObject.h"

@interface STSetting : STSiriModelObject

@property (nonatomic) NSInteger type; // ivar: _type
@property (retain, nonatomic) id *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif