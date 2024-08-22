// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TBQUALITYSCORE_H
#define TBQUALITYSCORE_H

@class NSString;
@protocol TBScore;

#import <Foundation/Foundation.h>


@interface TBQualityScore : NSObject <TBScore>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger score; // ivar: _score
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *typeDescription; // ivar: _typeDescription


+(BOOL)supportsSecureCoding;
+(id)qualityScoreWithValue:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithValue:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif