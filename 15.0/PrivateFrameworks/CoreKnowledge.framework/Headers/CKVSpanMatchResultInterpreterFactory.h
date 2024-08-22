// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVSPANMATCHRESULTINTERPRETERFACTORY_H
#define CKVSPANMATCHRESULTINTERPRETERFACTORY_H

@class NSString;
@protocol CKVSpanMatchResultInterpreterProvider;

#import <Foundation/Foundation.h>

#import "CKVSettings.h"
#import "CKVPriorRetrieverFactory.h"

@interface CKVSpanMatchResultInterpreterFactory : NSObject <CKVSpanMatchResultInterpreterProvider>

 {
    CKVSettings *_settings;
    CKVPriorRetrieverFactory *_priorRetrieverFactory;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)getInterpreter;
-(id)init;
-(id)initWithSettings:(id)arg0 ;


@end


#endif