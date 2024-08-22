// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCHANGEHISTORYRESULT_H
#define CNCHANGEHISTORYRESULT_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CNChangeHistoryAnchor.h"

@interface CNChangeHistoryResult : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger changesCount; // ivar: _changesCount
@property (nonatomic) BOOL changesTruncated; // ivar: _changesTruncated
@property (retain, nonatomic) NSArray *contactChanges; // ivar: _contactChanges
@property (retain, nonatomic) NSArray *groupChanges; // ivar: _groupChanges
@property (retain, nonatomic) NSArray *labeledValueChanges; // ivar: _labeledValueChanges
@property (retain, nonatomic) CNChangeHistoryAnchor *latestChangeAnchor; // ivar: _latestChangeAnchor
@property (nonatomic) BOOL unifyResults; // ivar: _unifyResults


+(BOOL)supportsSecureCoding;
-(BOOL)enumerateContactChangesWithKeysToFetch:(id)arg0 fromContactStore:(id)arg1 error:(*id)arg2 usingBlock:(id)arg3 ;
-(BOOL)enumerateGroupChangesFromContactStore:(id)arg0 error:(*id)arg1 usingBlock:(id)arg2 ;
-(id)contactChangesEnumeratorWithKeysToFetch:(id)arg0 contactStore:(id)arg1 ;
-(id)description;
-(id)groupChangesEnumeratorWithContactStore:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)labeledValueChangesEnumeratorWithContactStore:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif