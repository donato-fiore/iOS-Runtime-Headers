// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVPRIORRETRIEVERFACTORY_H
#define CKVPRIORRETRIEVERFACTORY_H

@class NSString;
@protocol CKVPriorRetrieverProvider;

#import <Foundation/Foundation.h>

#import "CKVSettings.h"

@interface CKVPriorRetrieverFactory : NSObject <CKVPriorRetrieverProvider>

 {
    CKVSettings *_settings;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)getPriorRetriever;
-(id)initWithSettings:(id)arg0 ;


@end


#endif