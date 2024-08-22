// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKCONTACTDATASOURCE_H
#define GKCONTACTDATASOURCE_H

@class NSDictionary, NSArray, CNContactStore;

#import <Foundation/Foundation.h>


@interface GKContactDataSource : NSObject

@property (retain, nonatomic) NSDictionary *contactLookup; // ivar: _contactLookup
@property (retain, nonatomic) NSArray *contacts; // ivar: _contacts
@property (retain, nonatomic) NSArray *sectionHeaders; // ivar: _sectionHeaders
@property (retain, nonatomic) NSDictionary *sectionToContactIndexes; // ivar: _sectionToContactIndexes
@property (retain, nonatomic) NSDictionary *skipToContactIndexes; // ivar: _skipToContactIndexes
@property (retain, nonatomic) NSArray *skipValues; // ivar: _skipValues
@property (retain, nonatomic) CNContactStore *store; // ivar: _store


-(id)fullContactWithIdentifier:(id)arg0 ;
-(id)init;
-(void)loadContactsWithHandler:(id)arg0 ;


@end


#endif