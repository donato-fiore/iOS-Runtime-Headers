// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMFDEFAULTAUTOCOMPLETECANDIDATEPROVIDER_H
#define EMFDEFAULTAUTOCOMPLETECANDIDATEPROVIDER_H

@class NSArray;
@protocol EMFAutocompleteCandidateProvider;

#import <Foundation/Foundation.h>


@interface EMFDefaultAutocompleteCandidateProvider : NSObject <EMFAutocompleteCandidateProvider>



@property (readonly, nonatomic) NSArray *tokens; // ivar: _tokens


+(id)providerFromInvertedIndex:(id)arg0 ;
-(BOOL)isValidToken:(id)arg0 ;
-(id)firstCandidateMatchingPrefix:(id)arg0 ;
-(id)firstMatchForPrefix:(id)arg0 ;
-(id)initWithBundle:(id)arg0 ;
-(id)initWithTokens:(id)arg0 ;
-(id)matchesForPrefix:(id)arg0 usingAlgorithm:(NSUInteger)arg1 ;
-(void)enumerateCandidatesMatchingPrefix:(id)arg0 withEnumerationType:(NSInteger)arg1 maxCandidates:(NSUInteger)arg2 usingBlock:(id)arg3 ;


@end


#endif