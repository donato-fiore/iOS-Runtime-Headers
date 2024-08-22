// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PSCONTACTEMBEDDINGDATACOLLECTIONUTILITIES_H
#define _PSCONTACTEMBEDDINGDATACOLLECTIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface _PSContactEmbeddingDataCollectionUtilities : NSObject



+(id)prepareAllEventsFromContactEmbeddingsDict:(id)arg0 ;
+(id)prepareEventArrayFromEmbeddingDict:(id)arg0 forUser:(id)arg1 sessionId:(id)arg2 ;
+(id)prepareEventFromContactEmbedding:(id)arg0 contactId:(id)arg1 ;


@end


#endif