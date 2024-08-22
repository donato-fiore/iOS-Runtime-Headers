// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTCARDFIELDPICKERDATASOURCE_H
#define CNCONTACTCARDFIELDPICKERDATASOURCE_H

@class NSArray, NSString;
@protocol UITableViewDataSource;

#import <Foundation/Foundation.h>


@interface CNContactCardFieldPickerDataSource : NSObject <UITableViewDataSource>



@property (retain, nonatomic) NSArray *contacts; // ivar: _contacts
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *sections; // ivar: _sections
@property (readonly) Class superclass;


+(BOOL)isSharingMeContactForContacts:(id)arg0 ;
+(id)shareableCardPropertiesForContacts:(id)arg0 ;
+(id)shareableNamePropertiesForContact:(id)arg0 ;
-(BOOL)hasPhotoForContact:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSInteger)totalItemCount;
-(id)_loadSections;
-(id)_loadSectionsForContacts;
-(id)firstContactContainingPhoto;
-(id)initWithContact:(id)arg0 ;
-(id)initWithContacts:(id)arg0 ;
-(id)itemsForKey:(id)arg0 forContact:(id)arg1 ;
-(id)itemsForKey:(id)arg0 forContacts:(id)arg1 ;
-(id)keyForIndexPath:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;


@end


#endif