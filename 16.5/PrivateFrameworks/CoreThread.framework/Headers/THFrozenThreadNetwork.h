// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef THFROZENTHREADNETWORK_H
#define THFROZENTHREADNETWORK_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "THThreadNetworkCredentialsDataSet.h"

@interface THFrozenThreadNetwork : NSObject

@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) THThreadNetworkCredentialsDataSet *credentialsDataSet; // ivar: _credentialsDataSet
@property (readonly, nonatomic) NSDate *lastModificationDate; // ivar: _lastModificationDate


-(id)initWithCredentialsDataSet:(id)arg0 creationDate:(id)arg1 lastModificationDate:(id)arg2 ;


@end


#endif