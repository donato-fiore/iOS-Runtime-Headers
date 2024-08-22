// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOCFEATUREREQUIREMENT_H
#define DOCFEATUREREQUIREMENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DOCFeatureRequirement : NSObject

@property (readonly) NSString *name; // ivar: _name
@property (readonly) id *requirementValidationBlock; // ivar: _requirementValidationBlock


-(id)initWithName:(id)arg0 requirementValidationBlock:(id)arg1 ;


@end


#endif