// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRCHNETWORKCURSOR_H
#define CRCHNETWORKCURSOR_H


#import <Foundation/Foundation.h>


@interface CRCHNetworkCursor : NSObject {
    vector<unsigned long, std::allocator<unsigned long>> _edgeIndexes;
}




-(NSUInteger)edgeIndexAtPosition:(NSUInteger)arg0 ;
-(NSUInteger)edgeIndexCount;
-(void)addEdgeIndex:(NSUInteger)arg0 ;


@end


#endif