// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPCONTACT_H
#define CPCONTACT_H

@class NSArray, UIImage, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CPContactEntity.h"

@interface CPContact : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *actions;
@property (retain, nonatomic) CPContactEntity *contactEntity; // ivar: _contactEntity
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *informativeText;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *subtitle;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 image:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif