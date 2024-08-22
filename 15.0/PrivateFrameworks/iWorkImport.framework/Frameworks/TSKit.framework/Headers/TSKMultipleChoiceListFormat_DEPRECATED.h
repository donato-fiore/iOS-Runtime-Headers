// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKMULTIPLECHOICELISTFORMAT_DEPRECATED_H
#define TSKMULTIPLECHOICELISTFORMAT_DEPRECATED_H

@protocol NSCopying, TSUMultipleChoiceListChoiceProviding;


#import "TSKFormat.h"

@interface TSKMultipleChoiceListFormat_DEPRECATED : TSKFormat <NSCopying>



@property (readonly, nonatomic) int initialValue; // ivar: _initialValue
@property (readonly, nonatomic) unsigned int multipleChoiceListFormatID; // ivar: _multipleChoiceListFormatID
@property (readonly, nonatomic) NSObject<TSUMultipleChoiceListChoiceProviding> *popupModel; // ivar: _popupModel


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)asMultipleChoiceListFormat;
-(id)initWithInitialValue:(int)arg0 multipleChoiceListFormatID:(unsigned int)arg1 popupModel:(id)arg2 ;
-(id)stringFromDouble:(CGFloat)arg0 locale:(id)arg1 ;


@end


#endif