// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UNNOTIFICATIONCONTACTSERVICE_H
#define _UNNOTIFICATIONCONTACTSERVICE_H

@class NSCache, CNContactStore;

#import <Foundation/Foundation.h>

#import "_UNCNContactResolver.h"

@interface _UNNotificationContactService : NSObject {
    NSCache *_resultsByServiceRecord;
    _UNCNContactResolver *_resolver;
    CNContactStore *_curatedContactStore;
}




+(id)sharedInstance;
-(BOOL)canAddToCuratedContacts:(id)arg0 bundleIdentifier:(id)arg1 ;
-(id)_matchForContact:(id)arg0 bundleIdentifier:(id)arg1 ;
-(id)curatedContactForContact:(id)arg0 bundleIdentifier:(id)arg1 keysToFetch:(id)arg2 ;
-(id)curatedContactMatchDetailsForContact:(id)arg0 bundleIdentifier:(id)arg1 ;
-(id)initWithResolver:(id)arg0 ;
-(id)newCuratedContactForContact:(id)arg0 imageData:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)updateServiceWithContact:(id)arg0 bundleIdentifier:(id)arg1 ;
-(void)_setResult:(id)arg0 forContact:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)confirmCuratedContactSuggestion:(BOOL)arg0 forContact:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)didAddToCuratedContactsForContact:(id)arg0 bundleIdentifier:(id)arg1 cnContactIdentifier:(id)arg2 ;


@end


#endif