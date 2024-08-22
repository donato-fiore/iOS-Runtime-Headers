// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXRENAMECOLLECTIONACTION_H
#define PXRENAMECOLLECTIONACTION_H

@class PHCollection, NSString;


#import "PXPhotosAction.h"

@interface PXRenameCollectionAction : PXPhotosAction

@property (readonly, nonatomic) PHCollection *collection; // ivar: _collection
@property (readonly, nonatomic) NSUInteger collectionType; // ivar: _collectionType
@property (copy, nonatomic) NSString *currentTitle; // ivar: _currentTitle
@property (readonly, copy, nonatomic) NSString *redoTitle; // ivar: _redoTitle
@property (readonly, copy, nonatomic) NSString *undoTitle; // ivar: _undoTitle


+(NSUInteger)_renameTypeForCollection:(id)arg0 ;
+(id)_actionNameLocalizationKeyForCollectionType:(NSUInteger)arg0 ;
+(id)actionNameForCollection:(id)arg0 ;
-(id)actionIdentifier;
-(id)actionNameLocalizationKey;
-(id)initWithCollection:(id)arg0 title:(id)arg1 ;
-(void)_changeTitle:(id)arg0 completionHandler:(id)arg1 ;
-(void)performAction:(id)arg0 ;
-(void)performUndo:(id)arg0 ;


@end


#endif