// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIDOCUMENTCONTEXTDATAMOVIE_H
#define VUIDOCUMENTCONTEXTDATAMOVIE_H

@class NSString;


#import "VUIDocumentContextData.h"

@interface VUIDocumentContextDataMovie : VUIDocumentContextData

@property (readonly, copy, nonatomic) NSString *movieID; // ivar: _movieID


-(id)initWithMovieID:(id)arg0 ;
-(id)jsonData;


@end


#endif