// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DKKNOWLEDGECONTENTPROVIDER_H
#define _DKKNOWLEDGECONTENTPROVIDER_H

@class NSString;
@protocol _DKContentProvider, _DKKnowledgeQuerying;

#import <Foundation/Foundation.h>


@interface _DKKnowledgeContentProvider : NSObject <_DKContentProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<_DKKnowledgeQuerying> *knowledgeStore; // ivar: _knowledgeStore
@property (readonly) Class superclass;


-(id)executeQuery:(id)arg0 error:(*id)arg1 ;
-(id)initWithKnowledgeStore:(id)arg0 ;
-(void)executeQuery:(id)arg0 queue:(id)arg1 withCompletion:(id)arg2 ;


@end


#endif