// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDINCONSISTENCY_H
#define IMDINCONSISTENCY_H

@class CUTWeakReference, NSDate;

#import <Foundation/Foundation.h>


@interface IMDInconsistency : NSObject {
    CUTWeakReference *_contextWeakReference;
}


@property (weak, nonatomic) id *context;
@property (nonatomic) NSUInteger count; // ivar: _count
@property (readonly) NSDate *firstOccurrence; // ivar: _firstOccurrence


-(BOOL)shouldJettison:(*id)arg0 ;
-(id)init;


@end


#endif