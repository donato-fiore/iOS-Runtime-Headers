// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGMERGECANDIDATEQUESTIONFACTORY_H
#define PGMERGECANDIDATEQUESTIONFACTORY_H

@class NSString, PHFetchResult;
@protocol PGQuestionFactory;

#import <Foundation/Foundation.h>

#import "PGManagerWorkingContext.h"

@interface PGMergeCandidateQuestionFactory : NSObject <PGQuestionFactory>

 {
    PGManagerWorkingContext *_workingContext;
    short _questionVersion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PHFetchResult *persons; // ivar: _persons
@property (readonly, nonatomic) NSInteger questionOptions;
@property (readonly, nonatomic) unsigned short questionType;
@property (readonly) Class superclass;


-(id)generateQuestionsWithLimit:(NSUInteger)arg0 progressBlock:(id)arg1 ;
-(id)initWithWorkingContext:(id)arg0 questionVersion:(short)arg1 ;


@end


#endif