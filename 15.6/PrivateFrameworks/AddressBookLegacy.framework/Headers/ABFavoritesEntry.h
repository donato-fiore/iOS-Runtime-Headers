// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ABFAVORITESENTRY_H
#define ABFAVORITESENTRY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ABFavoritesEntry : NSObject {
    int _abUid;
    int _abIdentifier;
    NSString *_value;
    int _property;
    int _type;
    BOOL _dirty;
    NSString *_label;
    NSString *_name;
    NSString *_abDatabaseUUID;
    *void _addressBook;
}




+(void)_runLookup;
-(*void)ABPerson;
-(BOOL)isEqual:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)displayName;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 addressBook:(*void)arg1 ;
-(id)initWithPerson:(*void)arg0 property:(int)arg1 identifier:(int)arg2 ;
-(id)initWithPerson:(*void)arg0 property:(int)arg1 identifier:(int)arg2 type:(int)arg3 ;
-(id)label;
-(id)nonLocalizedLabel;
-(id)value;
-(int)_abUid;
-(int)identifier;
-(int)property;
-(int)type;
-(void)_lookupChanged:(id)arg0 ;
-(void)_lookupNotFound;
-(void)_postEntryChanged;
-(void)_queueLookup;
-(void)_unqueueLookup;
-(void)dealloc;
-(void)dictionaryRepresentation:(*id)arg0 isDirty:(*BOOL)arg1 ;
-(void)recheckAddressBook;


@end


#endif