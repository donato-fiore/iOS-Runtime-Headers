// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NONRETAINEDOBJECTCONTAINER_H
#define NONRETAINEDOBJECTCONTAINER_H


#import <Foundation/Foundation.h>


@interface NonRetainedObjectContainer : NSObject

@property (weak, nonatomic) id *nonRetainedObject; // ivar: _nonRetainedObject


-(id)initWithObject:(id)arg0 ;


@end


#endif