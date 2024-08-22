// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSMUTABLEGRAPHEMETOPHONEMEREQUEST_H
#define QSSMUTABLEGRAPHEMETOPHONEMEREQUEST_H

@class NSString;


#import "QSSGraphemeToPhonemeRequest.h"
#import "QSSContextWithPronHints.h"

@interface QSSMutableGraphemeToPhonemeRequest : QSSGraphemeToPhonemeRequest

@property (copy, nonatomic) QSSContextWithPronHints *context_with_pron_hints;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *orthography;
@property (copy, nonatomic) NSString *session_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif