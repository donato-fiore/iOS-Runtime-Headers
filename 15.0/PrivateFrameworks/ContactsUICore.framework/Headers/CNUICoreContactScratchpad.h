// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNUICORECONTACTSCRATCHPAD_H
#define CNUICORECONTACTSCRATCHPAD_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface CNUICoreContactScratchpad : NSObject

@property (readonly, nonatomic) NSSet *allContacts;
@property (readonly, nonatomic) NSSet *edits; // ivar: _edits
@property (readonly, nonatomic) NSSet *modifiedContacts;


+(id)editMatchingContact:(id)arg0 inEdits:(id)arg1 ;
+(id)editsByReplacingEdit:(id)arg0 withUpdatedEdit:(id)arg1 inEdits:(id)arg2 ;
+(id)emptyScratchpad;
+(id)scratchpadByAddingUneditedContact:(id)arg0 toScratchpad:(id)arg1 ;
+(id)scratchpadByRemovingModifiedContact:(id)arg0 fromScratchpad:(id)arg1 ;
+(id)scratchpadBySettingModifiedContact:(id)arg0 onExistingEditInScratchpad:(id)arg1 ;
-(BOOL)containsContact:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithEdits:(id)arg0 ;
-(id)modifiedContactForContact:(id)arg0 ;
-(id)modifiedIfPresentOtherwiseOriginalContactForContact:(id)arg0 ;
-(id)scratchpadByAddingContacts:(id)arg0 ;
-(id)scratchpadByKeepingContacts:(id)arg0 ;
-(id)scratchpadByRemovingContacts:(id)arg0 ;


@end


#endif