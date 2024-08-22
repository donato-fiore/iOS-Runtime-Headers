// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFMESSAGEBODYSTRINGACCUMULATOR_H
#define MFMESSAGEBODYSTRINGACCUMULATOR_H

@class NSMutableString, NSString;
@protocol MFMessageBodyStringAccumulator;

#import <Foundation/Foundation.h>


@interface MFMessageBodyStringAccumulator : NSObject <MFMessageBodyStringAccumulator>

 {
    NSMutableString *_accumulatedString;
    NSUInteger _remainingLength;
    int _options;
    int _lastEntity;
    NSUInteger _lastCustomEntityTag;
    BOOL _isFull;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isFull;
-(id)accumulatedString;
-(id)initWithOptions:(int)arg0 lengthLimit:(NSUInteger)arg1 ;
-(void)appendCharacters:(*unsigned short)arg0 length:(NSUInteger)arg1 ;
-(void)appendCustomEntityWithTag:(NSUInteger)arg0 stringRepresentation:(id)arg1 ;
-(void)appendInnerTextWithConsumableNode:(id)arg0 ;
-(void)appendNewline;
-(void)appendRange:(struct _NSRange )arg0 ofString:(id)arg1 ;
-(void)appendString:(id)arg0 ;
-(void)dealloc;


@end


#endif