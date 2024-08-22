// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCOURSE_H
#define CKCOURSE_H

@class UIImage, NSString, NSURL, NSNumber, NSDictionary;

#import <Foundation/Foundation.h>


@interface CKCourse : NSObject

@property (readonly, nonatomic) UIImage *courseCover;
@property (readonly, copy, nonatomic) NSString *courseID;
@property (readonly, nonatomic) NSURL *courseURL;
@property (readonly, nonatomic) NSInteger enrollmentType;
@property (readonly, copy, nonatomic) NSString *institutionName;
@property (readonly, copy, nonatomic) NSString *longName;
@property (readonly, nonatomic) NSNumber *managedClassID;
@property (copy, nonatomic) NSDictionary *sharedCourse; // ivar: _sharedCourse
@property (readonly, copy, nonatomic) NSString *shortName;


+(void)initialize;
-(id)initWithSharedCourse:(id)arg0 ;


@end


#endif