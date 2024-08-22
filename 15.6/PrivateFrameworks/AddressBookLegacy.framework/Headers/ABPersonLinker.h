// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ABPERSONLINKER_H
#define ABPERSONLINKER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ABPersonLinker : NSObject {
    *void _addressBook;
    NSMutableDictionary *_peopleByFirstName;
    NSMutableDictionary *_peopleByLastName;
    NSMutableDictionary *_peopleByOrganization;
}




+(BOOL)isAutoLinkingEnabled;
+(BOOL)isInitialLinkingEnabled;
+(BOOL)isLinkDataValidForAddressBook:(*void)arg0 ;
+(void)startAutoLinkingNewPeopleInAddressBook:(*void)arg0 inProcess:(BOOL)arg1 ;
-(BOOL)linkRecentlyAddedPeopleWithLimit:(NSInteger)arg0 ;
-(BOOL)shouldLinkPerson:(*void)arg0 toPeopleInDatabase:(id)arg1 andNewlyAddedPeople:(id)arg2 inInitialLinking:(BOOL)arg3 ;
-(id)copyArrayOfAllPeopleWithROWIDGreatThan:(int)arg0 withLimit:(NSInteger)arg1 ;
-(id)init;
-(id)initWithAddressBook:(*void)arg0 ;
-(id)otherPeopleInArray:(id)arg0 matchingPerson:(*void)arg1 ;
-(id)otherPeopleInDatabaseMatchingPerson:(*void)arg0 notIncludingPeople:(id)arg1 ;
-(id)suggestedPeopleToLinkWithPerson:(*void)arg0 isInitialLinking:(BOOL)arg1 ;
-(void)addPerson:(*void)arg0 toDictionary:(id)arg1 withProperty:(int)arg2 ;
-(void)dealloc;
-(void)linkNewlyAddedPerson:(*void)arg0 ;
-(void)linkRecentlyAddedPeople;
-(void)makeInitialLinks;
-(void)makeInitialLinksCountingOuterIterations:(*NSUInteger)arg0 ;
-(void)makeLinksForAddedPeople:(id)arg0 inInitialLinking:(BOOL)arg1 countingOuterIterations:(*NSUInteger)arg2 detectedLinkCount:(*NSUInteger)arg3 ;
-(void)presortPeople:(id)arg0 ;
-(void)removeAllLinks;


@end


#endif