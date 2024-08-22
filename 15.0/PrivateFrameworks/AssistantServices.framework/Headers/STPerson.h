// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STPERSON_H
#define STPERSON_H

@class NSSet, NSString;
@protocol AFTranscriptionType;


#import "STSiriModelObject.h"

@interface STPerson : STSiriModelObject <AFTranscriptionType>



@property (copy, nonatomic) NSSet *contactHandles; // ivar: _contactHandles
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *fullName; // ivar: _fullName
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif