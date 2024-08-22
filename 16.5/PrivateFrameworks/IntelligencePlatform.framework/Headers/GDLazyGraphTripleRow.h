// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GDLAZYGRAPHTRIPLEROW_H
#define GDLAZYGRAPHTRIPLEROW_H

@class NSString, NSNumber;
@protocol GDExtendedTriple;

#import <Foundation/Foundation.h>

#import "GDLazyGraphTripleRowCursor.h"

@interface GDLazyGraphTripleRow : NSObject <GDExtendedTriple>

 {
    NSString *_subjectOverride;
    NSString *_subject;
    NSString *_predicate;
    NSString *_relationshipId;
    NSString *_relationshipPredicate;
    NSString *_object;
    NSString *_sources;
    NSNumber *_confidence;
    NSString *_sourceDuplicates;
    NSNumber *_timestamp;
    GDLazyGraphTripleRowCursor *_cursor;
}


@property (readonly, nonatomic) CGFloat confidence;
@property (readonly, nonatomic) NSString *object;
@property (readonly, nonatomic) NSString *predicate;
@property (readonly, nonatomic) NSString *relationshipId;
@property (readonly, nonatomic) NSString *relationshipPredicate;
@property (readonly, nonatomic) NSString *sourceDuplicates;
@property (readonly, nonatomic) NSString *sources;
@property (readonly, nonatomic) NSString *subject;
@property (readonly, nonatomic) CGFloat timestamp;




@end


#endif