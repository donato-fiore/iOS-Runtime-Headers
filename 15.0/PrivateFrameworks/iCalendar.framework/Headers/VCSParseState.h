// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCSPARSESTATE_H
#define VCSPARSESTATE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "VCSCalendar.h"
#import "VCSEntity.h"

@interface VCSParseState : NSObject

@property (retain, nonatomic) NSMutableArray *calendars; // ivar: _calendars
@property (nonatomic) NSUInteger context; // ivar: _context
@property (retain, nonatomic) VCSCalendar *currentCalendar; // ivar: _currentCalendar
@property (retain, nonatomic) VCSEntity *currentEntity; // ivar: _currentEntity
@property (nonatomic) int lineNumber; // ivar: _lineNumber
@property (nonatomic) BOOL palmImport; // ivar: _palmImport
@property (nonatomic) NSUInteger status; // ivar: _status
@property (nonatomic) NSInteger version; // ivar: _version


-(id)init;


@end


#endif