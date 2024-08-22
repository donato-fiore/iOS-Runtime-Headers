// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFSTORYCONCRETERECIPEPRESENTATION_H
#define PFSTORYCONCRETERECIPEPRESENTATION_H

@class NSArray, NSString;
@protocol PFStoryRecipePresentation;

#import <Foundation/Foundation.h>


@interface PFStoryConcreteRecipePresentation : NSObject <PFStoryRecipePresentation>



@property (readonly, nonatomic) NSInteger clipCount;
@property (readonly, copy, nonatomic) NSArray *clips; // ivar: _clips
@property (readonly, nonatomic) NSString *diagnosticDescription;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier


-(BOOL)isEqualToPresentation:(id)arg0 ;
-(id)clipAtIndex:(NSInteger)arg0 ;
-(id)initWithIdentifier:(id)arg0 clips:(id)arg1 ;


@end


#endif