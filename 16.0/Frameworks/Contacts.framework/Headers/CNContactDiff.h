// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTDIFF_H
#define CNCONTACTDIFF_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CNContactDiff : NSObject

@property (readonly, copy) NSArray *updates; // ivar: _updates


+(id)diffContact:(id)arg0 to:(id)arg1 error:(*id)arg2 ;
-(BOOL)applyToABPerson:(*void)arg0 isUnified:(BOOL)arg1 logger:(id)arg2 error:(*id)arg3 ;
-(id)contactByApplyingUpdatesToContact:(id)arg0 ;
-(id)description;
-(id)initWithUpdates:(id)arg0 ;
-(void)applyToMutableContact:(id)arg0 withIdentifierMap:(id)arg1 ;
-(void)applyToMutableContacts:(id)arg0 withIdentifierMap:(id)arg1 ;


@end


#endif