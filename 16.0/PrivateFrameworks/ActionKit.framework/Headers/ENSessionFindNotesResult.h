// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENSESSIONFINDNOTESRESULT_H
#define ENSESSIONFINDNOTESRESULT_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>

#import "ENNoteRef.h"
#import "ENNotebook.h"

@interface ENSessionFindNotesResult : NSObject

@property (retain, nonatomic) NSDate *created; // ivar: _created
@property (nonatomic) BOOL hasResources; // ivar: _hasResources
@property (retain, nonatomic) ENNoteRef *noteRef; // ivar: _noteRef
@property (retain, nonatomic) ENNotebook *notebook; // ivar: _notebook
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) int updateSequenceNum; // ivar: _updateSequenceNum
@property (retain, nonatomic) NSDate *updated; // ivar: _updated


-(id)description;


@end


#endif