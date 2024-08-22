// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISOPENURLOPERATION_H
#define ISOPENURLOPERATION_H



#import "ISOperation.h"
#import "ISOpenURLRequest.h"

@interface ISOpenURLOperation : ISOperation {
    ISOpenURLRequest *_request;
}


@property (readonly) ISOpenURLRequest *openURLRequest;


-(BOOL)_openURL:(id)arg0 ;
-(id)_newSortedTargetsArray;
-(id)init;
-(id)initWithOpenURLRequest:(id)arg0 ;
-(void)run;


@end


#endif