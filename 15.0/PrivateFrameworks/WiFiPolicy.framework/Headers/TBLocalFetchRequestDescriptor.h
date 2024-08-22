// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TBLOCALFETCHREQUESTDESCRIPTOR_H
#define TBLOCALFETCHREQUESTDESCRIPTOR_H

@class NSFetchRequest;

#import <Foundation/Foundation.h>


@interface TBLocalFetchRequestDescriptor : NSObject

@property (readonly, nonatomic) NSFetchRequest *fetchRequest; // ivar: _fetchRequest
@property (retain, nonatomic) NSFetchRequest *localFetchRequest; // ivar: _localFetchRequest


-(id)initWithFetchRequest:(id)arg0 ;


@end


#endif