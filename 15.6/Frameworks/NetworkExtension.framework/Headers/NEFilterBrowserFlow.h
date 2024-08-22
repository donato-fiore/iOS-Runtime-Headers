// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEFILTERBROWSERFLOW_H
#define NEFILTERBROWSERFLOW_H

@class NSURL, NSURLRequest, NSURLResponse;
@protocol NSSecureCoding, NSCopying;


#import "NEFilterFlow.h"

@interface NEFilterBrowserFlow : NEFilterFlow <NSSecureCoding, NSCopying>



@property (retain) NSURL *parentURL; // ivar: _parentURL
@property (retain) NSURLRequest *request; // ivar: _request
@property (retain) NSURLResponse *response; // ivar: _response


+(BOOL)supportsSecureCoding;
-(BOOL)createDataCompleteReply:(id)arg0 controlSocket:(int)arg1 direction:(NSInteger)arg2 verdict:(id)arg3 context:(id)arg4 ;
-(BOOL)createDataReply:(id)arg0 controlSocket:(int)arg1 direction:(NSInteger)arg2 verdict:(id)arg3 context:(id)arg4 ;
-(BOOL)createDropReply:(id)arg0 verdict:(id)arg1 context:(id)arg2 ;
-(BOOL)createNewFlowReply:(id)arg0 controlSocket:(int)arg1 verdict:(id)arg2 context:(id)arg3 ;
-(id)cleanRemediationURL:(id)arg0 flow:(id)arg1 providerConfiguration:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 parentURL:(id)arg1 sourceAppIdentifier:(id)arg2 ;
-(id)sanitizeRemediationButtonText:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeCurrentVerdictInReply:(id)arg0 direction:(NSInteger)arg1 ;


@end


#endif