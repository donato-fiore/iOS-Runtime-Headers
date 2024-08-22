// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef USOREDACTEDNODE_H
#define USOREDACTEDNODE_H


#import <Foundation/Foundation.h>


@interface USORedactedNode : NSObject {
    unique_ptr<siri::ontology::UsoGraph, std::default_delete<siri::ontology::UsoGraph>> mUsoGraph;
}


@property (nonatomic) NSInteger index; // ivar: _index
@property ? usoGraph;


-(id)initWithIndex:(NSInteger)arg0 usoGraph:(*void)arg1 ;


@end


#endif