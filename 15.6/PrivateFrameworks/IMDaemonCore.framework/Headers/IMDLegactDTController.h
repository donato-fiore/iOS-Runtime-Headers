// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMDLEGACTDTCONTROLLER_H
#define IMDLEGACTDTCONTROLLER_H

@class NSString, IDSService;
@protocol IDSServiceDelegate;

#import <Foundation/Foundation.h>


@interface IMDLegactDTController : NSObject <IDSServiceDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) IDSService *dtService; // ivar: _dtService
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_senderIDFromToken:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)service:(id)arg0 account:(id)arg1 incomingData:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;


@end


#endif