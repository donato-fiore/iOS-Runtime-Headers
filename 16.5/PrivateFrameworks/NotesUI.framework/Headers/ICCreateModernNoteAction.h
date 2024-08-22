// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICCREATEMODERNNOTEACTION_H
#define ICCREATEMODERNNOTEACTION_H

@class ICNoteContext, NSString, ICFolder;
@protocol ICCreateNoteAction;

#import <Foundation/Foundation.h>


@interface ICCreateModernNoteAction : NSObject <ICCreateNoteAction>



@property (readonly, nonatomic) ICNoteContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) ICFolder *folder; // ivar: _folder
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithNoteContext:(id)arg0 folder:(id)arg1 ;
-(id)performWithTitle:(id)arg0 contents:(id)arg1 error:(*id)arg2 ;


@end


#endif