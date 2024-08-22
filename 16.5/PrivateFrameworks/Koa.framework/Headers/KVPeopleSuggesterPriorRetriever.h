// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KVPEOPLESUGGESTERPRIORRETRIEVER_H
#define KVPEOPLESUGGESTERPRIORRETRIEVER_H

@class _PSContactSuggester, NSString;
@protocol KVPriorRetriever;

#import <Foundation/Foundation.h>


@interface KVPeopleSuggesterPriorRetriever : NSObject <KVPriorRetriever>

 {
    _PSContactSuggester *_contactSuggester;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_convertPeopleSuggesterPriorToPriorInfo:(id)arg0 ;
-(id)_fetchContactPriorsForContactIds:(id)arg0 ;
-(id)allPriorInfoWithThreshold:(unsigned int)arg0 ;
-(id)init;
-(id)priorInfoForItemIds:(id)arg0 ;


@end


#endif