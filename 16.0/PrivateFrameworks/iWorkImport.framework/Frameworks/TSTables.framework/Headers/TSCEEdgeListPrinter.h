// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCEEDGELISTPRINTER_H
#define TSCEEDGELISTPRINTER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TSCEEdgeListPrinter : NSObject {
    NSMutableDictionary *_edgesForOwner;
}




-(id)stringForEdgesWithLimit:(NSUInteger)arg0 ;
-(id)stringForOwnerID:(id)arg0 withLimit:(NSUInteger)arg1 ;
-(void)addEdge:(id)arg0 forOwner:(id)arg1 ;


@end


#endif