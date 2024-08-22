// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTIMAGEUPDATER_H
#define CNCONTACTIMAGEUPDATER_H


#import <Foundation/Foundation.h>

#import "CNMutableContact.h"
#import "CNContactStore.h"

@interface CNContactImageUpdater : NSObject

@property (readonly, nonatomic) CNMutableContact *contact; // ivar: _contact
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore


+(id)log;
-(BOOL)updateImageWithImageContact:(id)arg0 setAsMe:(BOOL)arg1 ;
-(id)initWithContact:(id)arg0 contactStore:(id)arg1 ;
-(void)updateContact:(id)arg0 withImagePropertiesFromContact:(id)arg1 ;


@end


#endif