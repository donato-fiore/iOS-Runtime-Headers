// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXACTIONENGINE_H
#define SXACTIONENGINE_H

@class NSMutableDictionary, NSString;
@protocol SXActionProvider;

#import <Foundation/Foundation.h>


@interface SXActionEngine : NSObject <SXActionProvider>



@property (readonly, nonatomic) NSMutableDictionary *additionFactories; // ivar: _additionFactories
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *hostNameFactories; // ivar: _hostNameFactories
@property (readonly) Class superclass;


-(id)actionForAddition:(id)arg0 ;
-(id)actionForURL:(id)arg0 ;
-(id)init;
-(void)registerFactory:(id)arg0 URLHost:(id)arg1 ;
-(void)registerFactory:(id)arg0 additionType:(Class)arg1 ;


@end


#endif