// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPDATAATTRIBUTESSNAPSHOT_H
#define TSPDATAATTRIBUTESSNAPSHOT_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface TSPDataAttributesSnapshot : NSObject {
    NSDictionary *_attributesMap;
}




+(id)newSnapshotForContext:(id)arg0 ;
-(id)attributesForData:(id)arg0 ;
-(id)init;
-(id)initWithAttributesMap:(id)arg0 ;


@end


#endif