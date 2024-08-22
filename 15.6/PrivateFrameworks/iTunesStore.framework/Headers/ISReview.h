// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISREVIEW_H
#define ISREVIEW_H

@class NSString, NSURL;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ISReview : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSInteger assetType; // ivar: _assetType
@property (retain, nonatomic) NSString *body; // ivar: _body
@property (nonatomic) NSUInteger bodyMaxLength; // ivar: _bodyMaxLength
@property (readonly, nonatomic) BOOL hasSavedDraft;
@property (retain, nonatomic) NSURL *infoURL; // ivar: _infoURL
@property (nonatomic) NSUInteger itemIdentifier; // ivar: _itemIdentifier
@property (retain, nonatomic) NSString *nickname; // ivar: _nickname
@property (nonatomic) BOOL nicknameIsConfirmed; // ivar: _nicknameIsConfirmed
@property (nonatomic) NSUInteger nicknameMaxLength; // ivar: _nicknameMaxLength
@property (nonatomic) float rating; // ivar: _rating
@property (retain, nonatomic) NSURL *submitURL; // ivar: _submitURL
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSUInteger titleMaxLength; // ivar: _titleMaxLength


+(BOOL)supportsSecureCoding;
-(BOOL)removeDraft;
-(BOOL)restoreFromDraft;
-(BOOL)saveAsDraft;
-(id)_draftFileName;
-(id)_draftsDirectoryPath;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadFromDictionary:(id)arg0 ;
-(void)mergeWithReview:(id)arg0 preferLocalValues:(BOOL)arg1 ;


@end


#endif