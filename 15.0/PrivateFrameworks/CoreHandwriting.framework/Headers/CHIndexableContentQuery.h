// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHINDEXABLECONTENTQUERY_H
#define CHINDEXABLECONTENTQUERY_H



#import "CHQuery.h"
#import "CHRecognitionSessionIndexableContent.h"

@interface CHIndexableContentQuery : CHQuery

@property (retain, setter=_setIndexableContent:) CHRecognitionSessionIndexableContent *indexableContent; // ivar: _indexableContent


-(id)debugName;
-(id)initWithRecognitionSession:(id)arg0 ;
-(void)dealloc;
-(void)q_updateQueryResult;


@end


#endif