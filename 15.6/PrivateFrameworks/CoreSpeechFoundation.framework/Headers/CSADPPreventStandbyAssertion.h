// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSADPPREVENTSTANDBYASSERTION_H
#define CSADPPREVENTSTANDBYASSERTION_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSADPPreventStandbyAssertion : NSObject

@property (nonatomic) *ADPAssertion adpAssertion; // ivar: _adpAssertion
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (retain, nonatomic) NSString *name; // ivar: _name


-(id)initWithName:(id)arg0 clientQueue:(id)arg1 ;
-(void)_setupADPAssertion:(id)arg0 ;
-(void)dealloc;


@end


#endif