// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8MAPSSYNC13MAPSSYNCRANGE_H
#define _TTC8MAPSSYNC13MAPSSYNCRANGE_H


#import <Foundation/Foundation.h>


@interface _TtC8MapsSync13MapsSyncRange : NSObject {
    ? _range;
}


@property (nonatomic, readonly) NSInteger limit;
@property (nonatomic, readonly) NSInteger offset;


-(id)init;
-(id)initWithOffset:(NSInteger)arg0 limit:(NSInteger)arg1 ;


@end


#endif