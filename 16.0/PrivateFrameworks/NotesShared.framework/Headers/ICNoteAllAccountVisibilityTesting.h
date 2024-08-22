// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICNOTEALLACCOUNTVISIBILITYTESTING_H
#define ICNOTEALLACCOUNTVISIBILITYTESTING_H

@class NSString;
@protocol ICNoteVisibilityTesting;

#import <Foundation/Foundation.h>


@interface ICNoteAllAccountVisibilityTesting : NSObject <ICNoteVisibilityTesting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)supportsVisibilityTestingType:(NSInteger)arg0 ;
-(id)predicateForSearchableAttachments;
-(id)predicateForSearchableNotes;


@end


#endif