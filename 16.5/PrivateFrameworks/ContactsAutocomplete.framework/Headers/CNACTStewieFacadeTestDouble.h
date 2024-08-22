// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNACTSTEWIEFACADETESTDOUBLE_H
#define CNACTSTEWIEFACADETESTDOUBLE_H

@class NSArray, NSString;
@protocol CNACTStewieFacade;

#import <Foundation/Foundation.h>


@interface CNACTStewieFacadeTestDouble : NSObject <CNACTStewieFacade>

 {
    NSArray *_phrases;
    NSArray *_numbers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isEnabled;
@property (readonly) Class superclass;
@property (readonly) NSArray *terms;


-(id)initWithPhrases:(id)arg0 numbers:(id)arg1 ;


@end


#endif