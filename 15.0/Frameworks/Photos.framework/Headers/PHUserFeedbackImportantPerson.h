// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHUSERFEEDBACKIMPORTANTPERSON_H
#define PHUSERFEEDBACKIMPORTANTPERSON_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PHUserFeedbackImportantPerson : NSObject

@property (readonly, copy) NSString *personUUID; // ivar: _personUUID
@property (readonly) NSUInteger type; // ivar: _type


-(id)initWithPersonUUID:(id)arg0 type:(NSUInteger)arg1 ;


@end


#endif