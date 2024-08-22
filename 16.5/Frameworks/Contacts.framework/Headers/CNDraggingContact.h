// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNDRAGGINGCONTACT_H
#define CNDRAGGINGCONTACT_H

@class NSURL;

#import <Foundation/Foundation.h>

#import "CNContact.h"
#import "CNContactStore.h"

@interface CNDraggingContact : NSObject

@property (retain, nonatomic) NSURL *cachedFileURLRepresentation; // ivar: _cachedFileURLRepresentation
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore


+(id)availableDataRepresentationTypes;
+(id)os_log;
-(id)dataRepresentationForType:(id)arg0 ;
-(id)fetchContactWithKeys:(id)arg0 ;
-(id)fileNameForContact:(id)arg0 ;
-(id)fileURLRepresentation;
-(id)initWithContact:(id)arg0 contactStore:(id)arg1 ;
-(id)serializeContactToVCard:(id)arg0 ;
-(void)cleanupFileURLRepresentation;


@end


#endif