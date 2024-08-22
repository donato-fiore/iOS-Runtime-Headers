// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TEXTSEQUENCETRAIN_H
#define TEXTSEQUENCETRAIN_H

@class NSMutableArray, NSString;
@protocol TextSequence;

#import <Foundation/Foundation.h>


@interface TextSequenceTrain : NSObject <TextSequence>

 {
    NSMutableArray *_sequence;
    NSMutableArray *_target;
    NSMutableArray *_mask;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithLength:(NSUInteger)arg0 ;
-(id)mask;
-(id)sequence;
-(id)target;
-(void)addWordWithInputId:(NSUInteger)arg0 ;
-(void)addWordWithInputId:(NSUInteger)arg0 target:(NSUInteger)arg1 mask:(NSUInteger)arg2 ;


@end


#endif