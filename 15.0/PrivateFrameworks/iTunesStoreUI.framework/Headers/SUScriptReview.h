// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSCRIPTREVIEW_H
#define SUSCRIPTREVIEW_H

@class NSURL, SKUIReviewMetadata, NSNumber, NSString;


#import "SUScriptObject.h"

@interface SUScriptReview : SUScriptObject {
    NSURL *_infoURL;
    SKUIReviewMetadata *_review;
}


@property (readonly) NSNumber *adamID;
@property (retain) NSString *body;
@property (readonly) id *hasSavedDraft;
@property (retain) NSString *infoURL;
@property (retain) NSString *itemType;
@property (retain) NSString *nickname;
@property (retain) id *nicknameIsConfirmed;
@property (retain) NSNumber *rating;
@property (retain) NSString *title;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)copyReview;
-(id)init;
-(id)initWithReview:(id)arg0 ;
-(id)removeDraft;
-(id)restoreFromDraft;
-(id)saveAsDraft;
-(id)scriptAttributeKeys;
-(void)dealloc;


@end


#endif