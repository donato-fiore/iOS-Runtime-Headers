// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXMAPCOMPONENTSIZERFACTORY_H
#define SXMAPCOMPONENTSIZERFACTORY_H

@class NSString;
@protocol SXComponentSizerFactory;

#import <Foundation/Foundation.h>


@interface SXMapComponentSizerFactory : NSObject <SXComponentSizerFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int role;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *type;


-(id)sizerForComponent:(id)arg0 componentLayout:(id)arg1 layoutOptions:(id)arg2 DOMObjectProvider:(id)arg3 ;


@end


#endif