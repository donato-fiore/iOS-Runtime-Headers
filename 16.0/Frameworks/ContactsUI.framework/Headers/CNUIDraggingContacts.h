// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNUIDRAGGINGCONTACTS_H
#define CNUIDRAGGINGCONTACTS_H

@class CNContactStore, NSString, NSArray;
@protocol NSItemProviderWriting, NSItemProviderReading;

#import <Foundation/Foundation.h>


@interface CNUIDraggingContacts : NSObject <NSItemProviderWriting, NSItemProviderReading>



@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *draggingContacts; // ivar: _draggingContacts
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;


+(BOOL)canAcceptDropForDropSession:(id)arg0 ;
+(id)contactsFromDraggingContacts:(id)arg0 withKeys:(id)arg1 ;
+(id)contactsWithIdentifiers:(id)arg0 store:(id)arg1 keysToFetch:(id)arg2 unifyResults:(BOOL)arg3 error:(*id)arg4 ;
+(id)dragItemForContact:(id)arg0 withContactStore:(id)arg1 ;
+(id)draggingContactsForContacts:(id)arg0 contactStore:(id)arg1 ;
+(id)draggingContactsWithItemProviderData:(id)arg0 typeIdentifier:(id)arg1 contactStore:(id)arg2 error:(*id)arg3 ;
+(id)imageForDragging;
+(id)itemProviderForContact:(id)arg0 withContactStore:(id)arg1 ;
+(id)objectWithItemProviderData:(id)arg0 typeIdentifier:(id)arg1 error:(*id)arg2 ;
+(id)readableTypeIdentifiersForItemProvider;
+(void)provideContactsForDropSession:(id)arg0 withKeys:(id)arg1 completionBlock:(id)arg2 ;
+(void)provideVCardURLForDropSession:(id)arg0 completionBlock:(id)arg1 ;
-(id)initWithDraggingContacts:(id)arg0 contactStore:(id)arg1 ;
-(id)loadDataWithTypeIdentifier:(id)arg0 forItemProviderCompletionHandler:(id)arg1 ;


@end


#endif