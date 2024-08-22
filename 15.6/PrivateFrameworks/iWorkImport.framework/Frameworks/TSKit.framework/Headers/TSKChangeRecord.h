// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSKCHANGERECORD_H
#define TSKCHANGERECORD_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface TSKChangeRecord : NSObject

@property (readonly, nonatomic) BOOL allowedInCommit;
@property (readonly, nonatomic) id *details; // ivar: mDetails
@property (readonly, nonatomic) NSDictionary *detailsAsDictionary;
@property (readonly, nonatomic) unsigned int kind; // ivar: mKind


+(id)changeRecordWithKind:(unsigned int)arg0 details:(id)arg1 ;
-(id)initWithKind:(unsigned int)arg0 details:(id)arg1 ;


@end


#endif