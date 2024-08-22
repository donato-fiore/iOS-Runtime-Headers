// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWRENDERLISTPARAMETERS_H
#define BWRENDERLISTPARAMETERS_H

@class NSString;
@protocol BWRenderListParameterListProvider;

#import <Foundation/Foundation.h>


@interface BWRenderListParameters : NSObject <BWRenderListParameterListProvider>

 {
    BWRenderListParameterList _parameterList;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *BWRenderListParameterList parameterList;
@property (readonly) Class superclass;


+(void)initialize;
-(id)init;
-(id)initWithParameterList:(struct BWRenderListParameterList *)arg0 ;
-(struct BWRenderListParameterNode *)firstNode;
-(void)dealloc;


@end


#endif