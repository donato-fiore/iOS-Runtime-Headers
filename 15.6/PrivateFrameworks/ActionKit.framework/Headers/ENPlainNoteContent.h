// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENPLAINNOTECONTENT_H
#define ENPLAINNOTECONTENT_H

@class NSArray;


#import "ENNoteContent.h"

@interface ENPlainNoteContent : ENNoteContent

@property (copy, nonatomic) NSArray *contents; // ivar: _contents


-(id)enmlWithNote:(id)arg0 ;
-(id)initWithContents:(id)arg0 ;
-(id)initWithString:(id)arg0 ;


@end


#endif