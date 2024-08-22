// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKRECIPIENTGENERATOR_H
#define CKRECIPIENTGENERATOR_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CKRecipientGenerator : NSObject

@property (retain, nonatomic) NSArray *searchABPropertyTypes; // ivar: _searchABPropertyTypes


+(id)sharedRecipientGenerator;
-(id)recipientWithAddress:(id)arg0 ;
-(id)recipientWithContact:(id)arg0 ;
-(id)recipientWithContactProperty:(id)arg0 ;
-(void)getAddressForContact:(id)arg0 address:(*id)arg1 kind:(*NSUInteger)arg2 ;


@end


#endif