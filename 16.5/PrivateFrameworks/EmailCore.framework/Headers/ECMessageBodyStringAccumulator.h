// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ECMESSAGEBODYSTRINGACCUMULATOR_H
#define ECMESSAGEBODYSTRINGACCUMULATOR_H

@class NSMutableString, NSString;
@protocol ECMessageBodyStringAccumulator;

#import <Foundation/Foundation.h>


@interface ECMessageBodyStringAccumulator : NSObject <ECMessageBodyStringAccumulator>

 {
    NSMutableString *_accumulatedString;
    NSUInteger _remainingLength;
    NSUInteger _options;
    NSUInteger _lastEntity;
    NSUInteger _lastCustomEntityTag;
    BOOL _isFull;
}


@property (readonly, nonatomic) NSString *accumulatedString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isFull;
@property (readonly) Class superclass;


-(id)initWithOptions:(NSUInteger)arg0 lengthLimit:(NSUInteger)arg1 ;
-(void)appendCharacters:(*unsigned short)arg0 length:(NSUInteger)arg1 ;
-(void)appendCustomEntityWithTag:(NSUInteger)arg0 stringRepresentation:(id)arg1 ;
-(void)appendInnerTextWithConsumableNode:(id)arg0 ;
-(void)appendNewline;
-(void)appendRange:(struct _NSRange )arg0 ofString:(id)arg1 ;
-(void)appendString:(id)arg0 ;


@end


#endif