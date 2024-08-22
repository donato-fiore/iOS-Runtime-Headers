// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICNOTETIMELINESECTION_H
#define ICNOTETIMELINESECTION_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "ICNoteTimelineSectionIdentifier.h"

@interface ICNoteTimelineSection : NSObject

@property (retain, nonatomic) ICNoteTimelineSectionIdentifier *identifier; // ivar: _identifier
@property (retain, nonatomic) NSArray *objectIDs; // ivar: _objectIDs


-(id)initWithIdentifier:(id)arg0 objectIDs:(id)arg1 ;


@end


#endif