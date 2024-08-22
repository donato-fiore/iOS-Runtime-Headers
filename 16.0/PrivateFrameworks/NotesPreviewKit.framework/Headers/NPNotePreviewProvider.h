// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPNOTEPREVIEWPROVIDER_H
#define NPNOTEPREVIEWPROVIDER_H


#import <Foundation/Foundation.h>

#import "NPNotePreviewProviderInternal.h"

@interface NPNotePreviewProvider : NSObject

@property (retain, nonatomic) NPNotePreviewProviderInternal *notePreviewProvider; // ivar: _notePreviewProvider


+(id)shared;
-(id)initWithNotePreviewProvider:(id)arg0 ;
-(id)previewForUserActivity:(id)arg0 error:(*id)arg1 ;


@end


#endif