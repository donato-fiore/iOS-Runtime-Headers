// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TBPOPULARITYSCORE_H
#define TBPOPULARITYSCORE_H

@class NSString;
@protocol TBScore;

#import <Foundation/Foundation.h>


@interface TBPopularityScore : NSObject <TBScore>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger score; // ivar: _score
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *typeDescription; // ivar: _typeDescription


+(BOOL)supportsSecureCoding;
+(id)popularityScoreWithValue:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithValue:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif