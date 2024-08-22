// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMCOLLECTOR_H
#define BMCOLLECTOR_H

@class NSString;
@protocol BMCollectorJS;

#import <Foundation/Foundation.h>


@interface BMCollector : NSObject <BMCollectorJS>

 {
    ? name;
    ? queue;
    ? donors;
}


@property (nonatomic, copy) NSString *name;


-(BOOL)register:(id)arg0 ;
-(id)init;


@end


#endif