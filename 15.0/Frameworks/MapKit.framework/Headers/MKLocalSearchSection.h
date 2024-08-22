// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKLOCALSEARCHSECTION_H
#define MKLOCALSEARCHSECTION_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface MKLocalSearchSection : NSObject

@property (readonly, nonatomic) BOOL enableMapsSuggestServerReranking; // ivar: _enableMapsSuggestServerReranking
@property (readonly, nonatomic) BOOL enforceServerResultsOrder; // ivar: _enforceServerResultsOrder
@property (readonly, nonatomic) NSArray *results; // ivar: _results
@property (readonly, nonatomic) BOOL shouldInterleaveClientResults; // ivar: _shouldInterleaveClientResults
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(id)initWithResults:(id)arg0 title:(id)arg1 shouldInterleaveClientResults:(BOOL)arg2 enforceServerResultsOrder:(BOOL)arg3 enableMapsSuggestServerReranking:(BOOL)arg4 ;


@end


#endif