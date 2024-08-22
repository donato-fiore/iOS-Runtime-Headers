// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKMODALCONFIGURATION_H
#define FBKMODALCONFIGURATION_H

@class NSString, NSArray;


#import "FBKManagedFeedbackObject.h"
#import "FBKQuestion.h"

@interface FBKModalConfiguration : FBKManagedFeedbackObject

@property (copy, nonatomic) NSString *body;
@property (retain, nonatomic) NSArray *choices;
@property (copy, nonatomic) NSString *iconName;
@property (copy, nonatomic) FBKQuestion *question;
@property (nonatomic) NSInteger sortOrder;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSUInteger type;
@property (nonatomic) NSInteger typeEnum;


+(id)entityName;
+(id)fetchRequest;
-(void)setPropertiesFromJSONObject:(id)arg0 ;


@end


#endif