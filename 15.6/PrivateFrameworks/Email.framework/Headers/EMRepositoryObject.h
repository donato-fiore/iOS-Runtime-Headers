// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMREPOSITORYOBJECT_H
#define EMREPOSITORYOBJECT_H

@class NSString;
@protocol EMRepositoryObject;


#import "EMObject.h"
#import "EMRepository.h"

@interface EMRepositoryObject : EMObject <EMRepositoryObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) EMRepository *repository; // ivar: _repository
@property (readonly) Class superclass;




@end


#endif