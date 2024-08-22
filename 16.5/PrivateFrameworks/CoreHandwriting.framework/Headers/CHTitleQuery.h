// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHTITLEQUERY_H
#define CHTITLEQUERY_H

@class NSSet, NSString;


#import "CHQuery.h"

@interface CHTitleQuery : CHQuery

@property (readonly, copy, nonatomic) NSSet *titleStrokeIdentifiers; // ivar: _titleStrokeIdentifiers
@property (readonly, copy, nonatomic) NSString *transcribedTitle; // ivar: _transcribedTitle


-(id)debugName;
-(id)initWithRecognitionSession:(id)arg0 ;
-(void)q_updateQueryResult;


@end


#endif