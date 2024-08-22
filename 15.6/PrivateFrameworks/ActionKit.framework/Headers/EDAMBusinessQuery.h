// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDAMBUSINESSQUERY_H
#define EDAMBUSINESSQUERY_H

@class NSNumber;


#import "FATObject.h"
#import "EDAMNoteFilter.h"

@interface EDAMBusinessQuery : FATObject

@property (retain, nonatomic) EDAMNoteFilter *filter; // ivar: _filter
@property (retain, nonatomic) NSNumber *includeNotebooks; // ivar: _includeNotebooks
@property (retain, nonatomic) NSNumber *includeNotesCounts; // ivar: _includeNotesCounts
@property (retain, nonatomic) NSNumber *numExperts; // ivar: _numExperts


+(id)structFields;
+(id)structName;


@end


#endif