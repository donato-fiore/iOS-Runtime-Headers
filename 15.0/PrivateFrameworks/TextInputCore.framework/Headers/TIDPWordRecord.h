// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIDPWORDRECORD_H
#define TIDPWORDRECORD_H

@class NSNumber, NSString, NSUUID;

#import <Foundation/Foundation.h>

#import "HCHuffmanCoder.h"

@interface TIDPWordRecord : NSObject

@property (readonly, nonatomic) NSNumber *codedWord;
@property (readonly, nonatomic) NSString *codedWordAsString;
@property (retain, nonatomic) HCHuffmanCoder *coder; // ivar: _coder
@property (readonly, nonatomic) NSUUID *coderVersion;
@property (copy, nonatomic) NSString *word; // ivar: _word
@property (retain, nonatomic) NSNumber *wordPosition; // ivar: _wordPosition


+(id)word:(id)arg0 atPosition:(id)arg1 ;
+(id)word:(id)arg0 atPosition:(id)arg1 coder:(id)arg2 ;
-(id)toDPWordRecord;


@end


#endif