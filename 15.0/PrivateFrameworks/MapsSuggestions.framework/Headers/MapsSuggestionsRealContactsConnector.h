// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPSSUGGESTIONSREALCONTACTSCONNECTOR_H
#define MAPSSUGGESTIONSREALCONTACTSCONNECTOR_H

@class NSString;
@protocol MapsSuggestionsContactsConnector;

#import <Foundation/Foundation.h>

#import "MapsSuggestionsContacts.h"

@interface MapsSuggestionsRealContactsConnector : NSObject <MapsSuggestionsContactsConnector>

 {
    MapsSuggestionsContacts *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(id)_crossPlatformUnifiedMeContactWithKeysToFetch:(id)arg0 error:(*id)arg1 ;
-(id)contactForIdentifier:(id)arg0 ;
-(id)singleLineStringFromPostalAddress:(id)arg0 addCountryName:(BOOL)arg1 ;
-(void)receivedNotification:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)startListeningForChanges;
-(void)stopListeningForChanges;


@end


#endif