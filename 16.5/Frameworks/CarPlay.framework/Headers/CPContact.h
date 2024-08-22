// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPCONTACT_H
#define CPCONTACT_H

@class NSArray, UIImage, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CPTemplate.h"
#import "CPContactEntity.h"

@interface CPContact : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *actions;
@property (weak, nonatomic) CPTemplate *associatedTemplate; // ivar: _associatedTemplate
@property (retain, nonatomic) CPContactEntity *contactEntity; // ivar: _contactEntity
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *informativeText;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *subtitle;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 image:(id)arg1 ;
-(void)_associateControlsToTemplate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif