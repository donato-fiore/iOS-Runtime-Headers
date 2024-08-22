// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MTLOBJECTWITHLABEL_H
#define _MTLOBJECTWITHLABEL_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _MTLObjectWithLabel : NSObject {
    NSString *_label;
    os_unfair_lock_s _labelLock;
}


@property (copy) NSString *label;


-(id)init;
-(id)retainedLabel;
-(void)dealloc;


@end


#endif