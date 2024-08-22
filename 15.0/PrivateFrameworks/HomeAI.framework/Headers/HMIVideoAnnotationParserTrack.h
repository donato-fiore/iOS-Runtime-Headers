// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIVIDEOANNOTATIONPARSERTRACK_H
#define HMIVIDEOANNOTATIONPARSERTRACK_H

@class NSUUID, NSArray;

#import <Foundation/Foundation.h>


@interface HMIVideoAnnotationParserTrack : NSObject

@property (readonly) NSUUID *UUID; // ivar: _UUID
@property (readonly) Class eventClass; // ivar: _eventClass
@property (readonly) NSArray *records; // ivar: _records


-(id)initWithEventClass:(Class)arg0 records:(id)arg1 UUID:(id)arg2 ;


@end


#endif