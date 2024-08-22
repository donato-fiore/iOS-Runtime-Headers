// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASREQUESTOPTIONSBUILDER_H
#define SASREQUESTOPTIONSBUILDER_H


#import <Foundation/Foundation.h>

#import "SASSystemState.h"

@interface SASRequestOptionsBuilder : NSObject

@property (nonatomic) NSInteger presentationIdentifier; // ivar: _presentationIdentifier
@property (retain, nonatomic) SASSystemState *systemState; // ivar: _systemState


-(BOOL)_siriIsEnabled;
-(id)_createRequestOptionsForRequest:(id)arg0 withDataSource:(id)arg1 ;
-(id)buildOptionsWithRequest:(id)arg0 presentationIdentifier:(NSInteger)arg1 dataSource:(id)arg2 ;


@end


#endif