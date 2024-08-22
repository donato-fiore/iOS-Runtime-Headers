// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GDKNOSISARGINFO_H
#define GDKNOSISARGINFO_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GDKnosisArgInfo : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *arg; // ivar: _arg
@property (readonly, copy, nonatomic) NSString *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithValue:(id)arg0 arg:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif