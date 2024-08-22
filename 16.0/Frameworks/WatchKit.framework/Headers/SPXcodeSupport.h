// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPXCODESUPPORT_H
#define SPXCODESUPPORT_H

@class NSString;
@protocol SPLocalApplicationProtocol;

#import <Foundation/Foundation.h>


@interface SPXcodeSupport : NSObject <SPLocalApplicationProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)applicationIdentifierWithReply:(id)arg0 ;
-(void)receiveData:(id)arg0 ;


@end


#endif