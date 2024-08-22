// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTMUTABLEPRONGUESSSTREAMINGRESPONSE_H
#define FTMUTABLEPRONGUESSSTREAMINGRESPONSE_H



#import "FTPronGuessStreamingResponse.h"
#import "FTPronGuessResponse.h"

@interface FTMutablePronGuessStreamingResponse : FTPronGuessStreamingResponse

@property (copy, nonatomic) FTPronGuessResponse *contentAsFTPronGuessResponse;
@property (nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif