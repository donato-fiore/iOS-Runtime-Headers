// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNPERFORMSUGGESTEDRESULTSQUERYOPERATION_H
#define LNPERFORMSUGGESTEDRESULTSQUERYOPERATION_H

@class NSString;


#import "LNConnectionOperation.h"
#import "LNQueryOutput.h"

@interface LNPerformSuggestedResultsQueryOperation : LNConnectionOperation

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (copy, nonatomic) NSString *entityMangledTypeName; // ivar: _entityMangledTypeName
@property (copy, nonatomic) NSString *entityType; // ivar: _entityType
@property (copy, nonatomic) LNQueryOutput *output; // ivar: _output


-(id)initWithConnectionInterface:(id)arg0 entityMangledTypeName:(id)arg1 completionHandler:(id)arg2 ;
-(id)initWithConnectionInterface:(id)arg0 entityType:(id)arg1 completionHandler:(id)arg2 ;
-(void)finishWithError:(id)arg0 ;
-(void)start;


@end


#endif