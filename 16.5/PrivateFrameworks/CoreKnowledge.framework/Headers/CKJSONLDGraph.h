// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKJSONLDGRAPH_H
#define CKJSONLDGRAPH_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CKJSONLDGraph : NSObject {
    ? _entities;
    ? queue;
}


@property (nonatomic, readonly) NSArray *entities;


-(id)init;
-(id)initWithEntities:(id)arg0 ;
-(void)linkedDataWithCompletionHandler:(id)arg0 ;


@end


#endif