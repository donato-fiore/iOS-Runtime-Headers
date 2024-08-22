// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNUIGROUPSANDCONTAINERSCONTACTSSAVERESULT_H
#define CNUIGROUPSANDCONTAINERSCONTACTSSAVERESULT_H

@class NSArray, NSError;

#import <Foundation/Foundation.h>


@interface CNUIGroupsAndContainersContactsSaveResult : NSObject

@property (readonly, nonatomic) NSArray *addedContacts; // ivar: _addedContacts
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) BOOL saveDidSucceed; // ivar: _saveDidSucceed


-(id)initWithSuccess:(BOOL)arg0 error:(id)arg1 addedContacts:(id)arg2 ;


@end


#endif