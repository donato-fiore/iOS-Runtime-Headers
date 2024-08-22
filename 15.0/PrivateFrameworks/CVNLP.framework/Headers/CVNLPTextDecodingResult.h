// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CVNLPTEXTDECODINGRESULT_H
#define CVNLPTEXTDECODINGRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CVNLPTextDecodingResult : NSObject

@property (readonly, nonatomic) NSArray *candidates; // ivar: _candidates


-(NSInteger)count;
-(id)initWithCandidates:(id)arg0 ;


@end


#endif