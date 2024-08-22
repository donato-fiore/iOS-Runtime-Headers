// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSIASSET_H
#define PSIASSET_H

@protocol NSCopying;


#import "PSIObject.h"
#import "PSIDate.h"

@interface PSIAsset : PSIObject <NSCopying>



@property (readonly) PSIDate *creationDate; // ivar: _creationDate


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithUUID:(id)arg0 creationDate:(id)arg1 ;


@end


#endif