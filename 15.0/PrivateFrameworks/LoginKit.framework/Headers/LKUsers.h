// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LKUSERS_H
#define LKUSERS_H

@class NSString, NSArray;
@protocol LKStudentProviding;

#import <Foundation/Foundation.h>


@interface LKUsers : NSObject <LKStudentProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *students; // ivar: _students
@property (readonly) Class superclass;


-(id)initWithUsers:(id)arg0 ;


@end


#endif