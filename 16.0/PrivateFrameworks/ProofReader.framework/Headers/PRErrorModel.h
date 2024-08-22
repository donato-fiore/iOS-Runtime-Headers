// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRERRORMODEL_H
#define PRERRORMODEL_H

@class NSString;
@protocol PRErrorModeling;

#import <Foundation/Foundation.h>


@interface PRErrorModel : NSObject <PRErrorModeling>

 {
    id<PRErrorModeling> *_customErrorModel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL hasCustomReplacementErrorScores;
@property (readonly) BOOL hasCustomTranspositionErrorScores;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)errorScoreForType:(NSUInteger)arg0 ;
-(CGFloat)replacementErrorScoreForIntendedCharacter:(unsigned short)arg0 actualCharacter:(unsigned short)arg1 ;
-(CGFloat)transpositionErrorScoreForIntendedFirstCharacter:(unsigned short)arg0 intendedSecondCharacter:(unsigned short)arg1 ;
-(id)initWithCustomErrorModel:(id)arg0 ;
-(void)dealloc;


@end


#endif