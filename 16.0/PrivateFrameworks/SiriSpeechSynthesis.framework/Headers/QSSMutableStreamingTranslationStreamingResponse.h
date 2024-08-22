// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSMUTABLESTREAMINGTRANSLATIONSTREAMINGRESPONSE_H
#define QSSMUTABLESTREAMINGTRANSLATIONSTREAMINGRESPONSE_H



#import "QSSStreamingTranslationStreamingResponse.h"
#import "QSSTranslationResponse.h"

@interface QSSMutableStreamingTranslationStreamingResponse : QSSStreamingTranslationStreamingResponse

@property (copy, nonatomic) QSSTranslationResponse *contentAsQSSTranslationResponse;
@property (nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif