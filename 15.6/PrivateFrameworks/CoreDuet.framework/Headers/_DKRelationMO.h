// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DKRELATIONMO_H
#define _DKRELATIONMO_H

@class NSManagedObject, NSString;


#import "_DKObjectMO.h"

@interface _DKRelationMO : NSManagedObject

@property (retain, nonatomic) _DKObjectMO *object;
@property (retain, nonatomic) _DKObjectMO *subject;
@property (retain, nonatomic) NSString *verbPhrase;




@end


#endif