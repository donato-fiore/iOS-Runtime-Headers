// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRAUDIOOUTPUTCLUSTERRENAMEOUTPUTPARAMS_H
#define MTRAUDIOOUTPUTCLUSTERRENAMEOUTPUTPARAMS_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface MTRAudioOutputClusterRenameOutputParams : NSObject

@property (retain, nonatomic) NSNumber *index; // ivar: _index
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif