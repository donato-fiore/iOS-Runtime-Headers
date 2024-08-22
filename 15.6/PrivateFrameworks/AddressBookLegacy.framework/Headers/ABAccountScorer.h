// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ABACCOUNTSCORER_H
#define ABACCOUNTSCORER_H

@class NSString, ACAccountStore;

#import <Foundation/Foundation.h>


@interface ABAccountScorer : NSObject

@property (nonatomic) *void account; // ivar: _account
@property (readonly, nonatomic) NSString *accountDisambiguationDescription;
@property (retain, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property (retain, nonatomic) NSString *accountType; // ivar: _accountType
@property (readonly, nonatomic) NSString *accountTypeDescription;
@property (nonatomic) *void addressBook; // ivar: _addressBook
@property (nonatomic) int defaultSourceID; // ivar: _defaultSourceID
@property (nonatomic) CGFloat score; // ivar: _score
@property (nonatomic) int sourceID; // ivar: _sourceID


-(id)initWithAddressBook:(*void)arg0 accountStore:(id)arg1 account:(*void)arg2 defaultSourceID:(int)arg3 ;
-(int)_findBestSourceID;
-(void)calculateScore;
-(void)dealloc;


@end


#endif