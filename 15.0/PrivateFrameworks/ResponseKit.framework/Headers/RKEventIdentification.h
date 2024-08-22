// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RKEVENTIDENTIFICATION_H
#define RKEVENTIDENTIFICATION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface RKEventIdentification : NSObject {
    *float _probabilities;
}


@property (readonly, nonatomic) NSArray *tokenSequences; // ivar: _tokenSequences


-(id)description;
-(id)init;
-(id)initWithOwnedTokenSequences:(id)arg0 probabilities:(*float)arg1 ;
-(struct ? )topClassification;
-(void)dealloc;
-(void)enumerateClassifiedTokens:(id)arg0 ;
-(void)enumerateTopKClassificationsForEachString:(NSUInteger)arg0 block:(id)arg1 ;
-(void)getTopKClassifications:(NSUInteger)arg0 block:(id)arg1 ;


@end


#endif