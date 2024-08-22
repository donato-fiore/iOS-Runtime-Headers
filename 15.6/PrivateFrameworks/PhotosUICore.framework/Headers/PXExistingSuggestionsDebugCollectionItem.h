// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXEXISTINGSUGGESTIONSDEBUGCOLLECTIONITEM_H
#define PXEXISTINGSUGGESTIONSDEBUGCOLLECTIONITEM_H

@class NSString, PHSuggestion;

#import <Foundation/Foundation.h>


@interface PXExistingSuggestionsDebugCollectionItem : NSObject

@property (readonly) NSString *description; // ivar: _description
@property (readonly) NSString *name; // ivar: _name
@property (readonly) PHSuggestion *suggestion; // ivar: _suggestion


-(id)initWithSuggestion:(id)arg0 ;


@end


#endif