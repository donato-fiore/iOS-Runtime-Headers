// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSUGGESTERDEBUGCOLLECTIONITEM_H
#define PXSUGGESTERDEBUGCOLLECTIONITEM_H

@class NSDate, NSString, NSDictionary, PHSuggestion;

#import <Foundation/Foundation.h>


@interface PXSuggesterDebugCollectionItem : NSObject

@property (readonly) NSDate *date; // ivar: _date
@property (readonly) NSString *description; // ivar: _description
@property (readonly) NSDictionary *info; // ivar: _info
@property (readonly) BOOL isInvalid;
@property (readonly) NSString *name; // ivar: _name
@property (readonly) PHSuggestion *suggestion; // ivar: _suggestion


-(id)initWithSuggestion:(id)arg0 suggestionInfo:(id)arg1 ;


@end


#endif