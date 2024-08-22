// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FXPRINCIPALAPIHANDLER_H
#define FXPRINCIPALAPIHANDLER_H

@class NSString;
@protocol PROAPIObject, FxPlugPrincipalDelegate;

#import <Foundation/Foundation.h>


@interface FxPrincipalAPIHandler : NSObject <PROAPIObject>

 {
    NSObject<FxPlugPrincipalDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)conformsToProtocol:(id)arg0 version:(unsigned int)arg1 ;
-(id)delegate;
-(id)initWithDelegate:(id)arg0 ;
-(id)servicePrincipal;
-(void)dealloc;
-(void)setDelegate:(id)arg0 ;


@end


#endif