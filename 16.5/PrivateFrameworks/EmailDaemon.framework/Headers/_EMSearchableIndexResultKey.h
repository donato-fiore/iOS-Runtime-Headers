// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EMSEARCHABLEINDEXRESULTKEY_H
#define _EMSEARCHABLEINDEXRESULTKEY_H

@class NSIndexSet;
@protocol EDSearchableCriterion;

#import <Foundation/Foundation.h>


@interface _EMSearchableIndexResultKey : NSObject

@property (retain, nonatomic) NSObject<EDSearchableCriterion> *criterion; // ivar: _criterion
@property (copy, nonatomic) NSIndexSet *mailboxIDs; // ivar: _mailboxIDs


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif