// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDSEARCHABLEINDEXSUBJECTTESTER_H
#define EDSEARCHABLEINDEXSUBJECTTESTER_H

@class NSString, NSArray;
@protocol EDSearchableIndexTesting;

#import <Foundation/Foundation.h>


@interface EDSearchableIndexSubjectTester : NSObject <EDSearchableIndexTesting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *fetchAttributes;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)verifySearchableItem:(id)arg0 againstExpectedData:(id)arg1 ;
-(id)expressionFromDataSamples:(id)arg0 ;
-(id)transformDataForVerification:(id)arg0 ;


@end


#endif