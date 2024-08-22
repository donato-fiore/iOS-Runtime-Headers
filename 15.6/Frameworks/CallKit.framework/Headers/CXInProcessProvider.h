// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CXINPROCESSPROVIDER_H
#define CXINPROCESSPROVIDER_H

@class NSString;


#import "CXProvider.h"
#import "CXInProcessCallSource.h"

@interface CXInProcessProvider : CXProvider

@property (weak, nonatomic) CXInProcessCallSource *callSource; // ivar: _callSource
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier


-(id)hostProtocolDelegate;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 callSource:(id)arg1 ;
-(void)setDelegate:(id)arg0 queue:(id)arg1 ;


@end


#endif