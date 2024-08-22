// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVPEOPLESUGGESTERPRIORRETRIEVER_H
#define CKVPEOPLESUGGESTERPRIORRETRIEVER_H

@class NSString;
@protocol CKVPriorRetriever;

#import <Foundation/Foundation.h>

#import "CKVPeopleSuggesterBridge.h"

@interface CKVPeopleSuggesterPriorRetriever : NSObject <CKVPriorRetriever>

 {
    CKVPeopleSuggesterBridge *_peopleSuggesterBridge;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_convertPeopleSuggesterPriorToPriorInfo:(id)arg0 ;
-(id)getPriorInfoForContactIds:(id)arg0 ;
-(id)init;
-(id)initWithPeopleSuggesterBridge:(id)arg0 ;


@end


#endif