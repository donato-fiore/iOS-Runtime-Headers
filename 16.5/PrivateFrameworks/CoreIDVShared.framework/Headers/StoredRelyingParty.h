// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STOREDRELYINGPARTY_H
#define STOREDRELYINGPARTY_H

@class NSManagedObject, NSSet, NSString;



@interface StoredRelyingParty : NSManagedObject

@property (nonatomic, retain) NSSet *presentmentKeys;
@property (nonatomic, copy) NSString *relyingPartyIdentifier;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif