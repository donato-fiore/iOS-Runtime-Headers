// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSPXPCMESSAGE_H
#define HKSPXPCMESSAGE_H

@class NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface HKSPXPCMessage : NSObject <BSDescriptionProviding>



@property (readonly, copy, nonatomic) id *block; // ivar: _block
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly) Class superclass;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
// -(id)initWithIdentifier:(id)arg0 block:(id)arg1 options:(unk)arg2 errorHandler:(NSUInteger)arg3  ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif