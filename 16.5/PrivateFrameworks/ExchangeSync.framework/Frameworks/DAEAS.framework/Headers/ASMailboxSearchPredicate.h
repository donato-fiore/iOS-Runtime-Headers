// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASMAILBOXSEARCHPREDICATE_H
#define ASMAILBOXSEARCHPREDICATE_H

@class NSPredicate;

#import <Foundation/Foundation.h>


@interface ASMailboxSearchPredicate : NSObject

@property (retain, nonatomic) NSPredicate *predicate; // ivar: _predicate


-(BOOL)isValid;
-(id)getString;
-(id)getStringForComparisonPredicate:(id)arg0 ;
-(id)getStringForCompoundPredicate:(id)arg0 ;
-(id)getStringForPredicate:(id)arg0 ;
-(id)initWithPredicate:(id)arg0 ;


@end


#endif