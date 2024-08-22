// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICCREATEHTMLNOTEACTION_H
#define ICCREATEHTMLNOTEACTION_H

@class NSString;
@protocol ICCreateNoteAction, ICLegacyContext, ICLegacyFolder;

#import <Foundation/Foundation.h>


@interface ICCreateHTMLNoteAction : NSObject <ICCreateNoteAction>



@property (readonly, nonatomic) NSObject<ICLegacyContext> *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<ICLegacyFolder> *folder; // ivar: _folder
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithHTMLNoteContext:(id)arg0 folder:(id)arg1 ;
-(id)performWithTitle:(id)arg0 contents:(id)arg1 error:(*id)arg2 ;


@end


#endif