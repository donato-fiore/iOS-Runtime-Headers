// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SYSHOWBACKLINKINDICATORCOMMANDSYNAPSEIMPL_H
#define SYSHOWBACKLINKINDICATORCOMMANDSYNAPSEIMPL_H

@class NSString;
@protocol SYShowBacklinkIndicatorCommandImpl;

#import <Foundation/Foundation.h>

#import "SYBacklinkIndicatorClient.h"

@interface SYShowBacklinkIndicatorCommandSynapseImpl : NSObject <SYShowBacklinkIndicatorCommandImpl>



@property (retain, nonatomic) SYBacklinkIndicatorClient *_client; // ivar: __client
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didSucceed; // ivar: _didSucceed
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDomainIdentifiers:(id)arg0 linkIdentifiers:(id)arg1 ;
-(void)invalidate;
-(void)runWithCompletion:(id)arg0 ;


@end


#endif