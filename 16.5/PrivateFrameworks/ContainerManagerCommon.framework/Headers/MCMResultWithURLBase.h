// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMRESULTWITHURLBASE_H
#define MCMRESULTWITHURLBASE_H

@class NSString, NSURL;
@protocol MCMResultWithURL;


#import "MCMResultBase.h"
#import "MCMError.h"

@interface MCMResultWithURLBase : MCMResultBase <MCMResultWithURL>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) MCMError *error;
@property (readonly, nonatomic) BOOL existed; // ivar: _existed
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *path; // ivar: _path
@property (readonly, nonatomic) char * sandboxToken; // ivar: _sandboxToken
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(BOOL)encodeResultOntoReply:(id)arg0 ;
-(id)initWithPath:(id)arg0 existed:(BOOL)arg1 sandboxToken:(char *)arg2 ;
-(id)initWithURL:(id)arg0 existed:(BOOL)arg1 sandboxToken:(char *)arg2 ;
-(void)dealloc;


@end


#endif