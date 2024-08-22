// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNAVATARCACHECHANGEANALYSIS_H
#define CNAVATARCACHECHANGEANALYSIS_H

@class NSData, NSArray;

#import <Foundation/Foundation.h>


@interface CNAvatarCacheChangeAnalysis : NSObject

@property (readonly, copy, nonatomic) NSData *currentChangeHistoryToken; // ivar: _currentChangeHistoryToken
@property (readonly, copy, nonatomic) NSArray *identifiersOfAffectedContacts; // ivar: _identifiersOfAffectedContacts


-(id)description;
-(id)initWithCurrentChangeHistoryToken:(id)arg0 identifiersOfAffectedContacts:(id)arg1 ;


@end


#endif