// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFSTORYCONCRETEAUTOEDITDECISIONLIST_H
#define PFSTORYCONCRETEAUTOEDITDECISIONLIST_H

@class NSArray, NSString;
@protocol PFStoryAutoEditDecisionList;

#import <Foundation/Foundation.h>


@interface PFStoryConcreteAutoEditDecisionList : NSObject <PFStoryAutoEditDecisionList>



@property (readonly, copy, nonatomic) NSArray *clips; // ivar: _clips
@property (readonly, nonatomic) NSString *diagnosticDescription;
@property (readonly, nonatomic) NSInteger numberOfClips;
@property (readonly, nonatomic) NSString *songAssetIdentifier; // ivar: _songAssetIdentifier


-(BOOL)isEqualToAutoEditDecisionList:(id)arg0 ;
-(id)clipAtIndex:(NSInteger)arg0 ;
-(id)initWithSongAssetIdentifier:(id)arg0 clips:(id)arg1 ;


@end


#endif