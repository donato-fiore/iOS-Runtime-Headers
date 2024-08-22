// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSMUTABLELANGUAGEDETECTIONSTREAMINGRESPONSE_H
#define QSSMUTABLELANGUAGEDETECTIONSTREAMINGRESPONSE_H



#import "QSSLanguageDetectionStreamingResponse.h"
#import "QSSLanguageDetectionResponse.h"

@interface QSSMutableLanguageDetectionStreamingResponse : QSSLanguageDetectionStreamingResponse

@property (copy, nonatomic) QSSLanguageDetectionResponse *contentAsQSSLanguageDetectionResponse;
@property (nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif