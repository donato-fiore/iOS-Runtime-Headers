// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBSPROCESSTERMINATIONREQUEST_H
#define FBSPROCESSTERMINATIONREQUEST_H

@class NSString;
@protocol NSCopying, BSDescriptionProviding, FBSProcess;

#import <Foundation/Foundation.h>


@interface FBSProcessTerminationRequest : NSObject <NSCopying, BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger exceptionCode; // ivar: _exceptionCode
@property (copy, nonatomic) NSString *explanation; // ivar: _explanation
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) NSUInteger options; // ivar: _options
@property (weak, nonatomic) NSObject<FBSProcess> *process; // ivar: _process
@property (nonatomic) NSInteger reportType; // ivar: _reportType
@property (readonly) Class superclass;


+(id)requestForProcess:(id)arg0 withLabel:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)execute;


@end


#endif