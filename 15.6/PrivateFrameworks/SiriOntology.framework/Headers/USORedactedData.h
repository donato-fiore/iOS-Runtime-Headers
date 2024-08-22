// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef USOREDACTEDDATA_H
#define USOREDACTEDDATA_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface USORedactedData : NSObject {
    unique_ptr<siri::ontology::UsoGraph, std::default_delete<siri::ontology::UsoGraph>> mRedactedGraph;
}


@property ? redactedGraph;
@property (retain, nonatomic) NSArray *redactedList; // ivar: _redactedList


-(id)initWithRedactedGraph:(*void)arg0 redactedList:(id)arg1 ;


@end


#endif