// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TEXTSEQUENCEINFERENCE_H
#define TEXTSEQUENCEINFERENCE_H

@class NSMutableArray, NSNumber, NSString;
@protocol TextSequence;

#import <Foundation/Foundation.h>


@interface TextSequenceInference : NSObject <TextSequence>

 {
    NSMutableArray *_sequence;
    NSNumber *_target;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithLength:(NSUInteger)arg0 ;
-(id)initWithLength:(NSUInteger)arg0 BOS:(NSUInteger)arg1 ;
-(id)sequence;
-(id)target;
-(void)addWordWithInputId:(NSUInteger)arg0 ;
-(void)resetWithBOS:(NSUInteger)arg0 ;


@end


#endif