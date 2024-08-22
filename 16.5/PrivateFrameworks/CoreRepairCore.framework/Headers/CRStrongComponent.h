// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRSTRONGCOMPONENT_H
#define CRSTRONGCOMPONENT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CRStrongComponent : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *componentType; // ivar: componentType
@property (retain, nonatomic) NSString *fwVersion; // ivar: fwVersion
@property (retain, nonatomic) NSString *identifer; // ivar: identifer


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithComponentType:(id)arg0 identifier:(id)arg1 fwVersion:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif