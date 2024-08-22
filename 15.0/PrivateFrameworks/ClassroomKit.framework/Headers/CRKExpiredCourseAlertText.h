// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKEXPIREDCOURSEALERTTEXT_H
#define CRKEXPIREDCOURSEALERTTEXT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CRKCourse.h"

@interface CRKExpiredCourseAlertText : NSObject

@property (readonly, nonatomic) NSString *acknowledgeOptionTitle;
@property (readonly, nonatomic) CRKCourse *course; // ivar: _course
@property (readonly, nonatomic) NSString *message;
@property (readonly, nonatomic) NSString *title;


+(id)new;
-(id)init;
-(id)initWithCourse:(id)arg0 ;


@end


#endif