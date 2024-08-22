// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSMUTABLEPRONGUESSSTREAMINGRESPONSE_H
#define QSSMUTABLEPRONGUESSSTREAMINGRESPONSE_H



#import "QSSPronGuessStreamingResponse.h"
#import "QSSPronGuessResponse.h"

@interface QSSMutablePronGuessStreamingResponse : QSSPronGuessStreamingResponse

@property (copy, nonatomic) QSSPronGuessResponse *contentAsQSSPronGuessResponse;
@property (nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif