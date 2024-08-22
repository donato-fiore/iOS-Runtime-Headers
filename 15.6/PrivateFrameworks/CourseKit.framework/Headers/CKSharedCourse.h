// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKSHAREDCOURSE_H
#define CKSHAREDCOURSE_H

@class NSManagedObject, UIImage, NSString, NSNumber;



@interface CKSharedCourse : NSManagedObject

@property (retain, nonatomic) UIImage *courseCover;
@property (copy, nonatomic) NSString *courseCoverChecksum;
@property (copy, nonatomic) NSString *courseID;
@property (nonatomic) NSInteger enrollmentType;
@property (copy, nonatomic) NSString *institutionName;
@property (copy, nonatomic) NSString *longName;
@property (retain, nonatomic) NSNumber *managedClassID;
@property (copy, nonatomic) NSString *shortName;




@end


#endif