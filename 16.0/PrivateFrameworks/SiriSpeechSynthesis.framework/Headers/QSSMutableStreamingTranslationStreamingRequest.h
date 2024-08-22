// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSMUTABLESTREAMINGTRANSLATIONSTREAMINGREQUEST_H
#define QSSMUTABLESTREAMINGTRANSLATIONSTREAMINGREQUEST_H



#import "QSSStreamingTranslationStreamingRequest.h"
#import "QSSStreamingTranslationRequest.h"

@interface QSSMutableStreamingTranslationStreamingRequest : QSSStreamingTranslationStreamingRequest

@property (copy, nonatomic) QSSStreamingTranslationRequest *contentAsQSSStreamingTranslationRequest;
@property (nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif