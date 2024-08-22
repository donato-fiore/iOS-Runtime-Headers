// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPCONTACTENTITY_H
#define CPCONTACTENTITY_H

@class NSArray, NSString;
@protocol CPContactProviding, NSSecureCoding;


#import "CPEntity.h"
#import "CPImageSet.h"

@interface CPContactEntity : CPEntity <CPContactProviding, NSSecureCoding>



@property (copy, nonatomic) NSArray *actionButtons; // ivar: _actionButtons
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CPImageSet *imageSet; // ivar: _imageSet
@property (copy, nonatomic) NSString *informativeText; // ivar: _informativeText
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 imageSet:(id)arg1 ;
-(id)objectForIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif