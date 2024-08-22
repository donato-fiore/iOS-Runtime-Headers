// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CDCONTACTCHANGEHISTORYEVENTVISITOR_H
#define _CDCONTACTCHANGEHISTORYEVENTVISITOR_H

@class CNFetchResult, NSMutableArray, NSArray, NSData, NSString;
@protocol CNChangeHistoryEventVisitor;

#import <Foundation/Foundation.h>


@interface _CDContactChangeHistoryEventVisitor : NSObject <CNChangeHistoryEventVisitor>

 {
    CNFetchResult *_changeEnumerator;
    NSMutableArray *_deletedContactIdentifiers;
    NSMutableArray *_addedContactIdentifiers;
}


@property (readonly, nonatomic) NSArray *addedContactIdentifiers;
@property (readonly, nonatomic) NSData *currentHistoryToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *deletedContactIdentifiers;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithChangeEnumerator:(id)arg0 ;
-(void)visitAddContactEvent:(id)arg0 ;
-(void)visitChanges;
-(void)visitDeleteContactEvent:(id)arg0 ;
-(void)visitDropEverythingEvent:(id)arg0 ;
-(void)visitUpdateContactEvent:(id)arg0 ;


@end


#endif