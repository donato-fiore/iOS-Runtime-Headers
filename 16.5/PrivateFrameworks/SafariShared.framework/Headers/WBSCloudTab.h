// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSCLOUDTAB_H
#define WBSCLOUDTAB_H

@class NSString, NSArray, NSDictionary, NSURL, NSUUID;
@protocol NSCopying, WBSCloudTabItem;

#import <Foundation/Foundation.h>


@interface WBSCloudTab : NSObject <NSCopying, WBSCloudTabItem>



@property (readonly, nonatomic) NSString *URLString;
@property (copy, nonatomic) NSArray *URLStringComponents; // ivar: _URLStringComponents
@property (copy, nonatomic) NSString *URLStringForLastSearch; // ivar: _URLStringForLastSearch
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentationForUserActivityUserInfo;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isShowingReader; // ivar: _isShowingReader
@property (copy, nonatomic) NSString *lastSearchTerm; // ivar: _lastSearchTerm
@property (nonatomic) BOOL matchedLastSearch; // ivar: _matchedLastSearch
@property (nonatomic, getter=isPinned) BOOL pinned; // ivar: _pinned
@property (copy, nonatomic) NSDictionary *readerScrollPositionDictionary; // ivar: _readerScrollPositionDictionary
@property (readonly, copy, nonatomic) NSString *sceneID; // ivar: _sceneID
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSString *titleForLastSearch; // ivar: _titleForLastSearch
@property (copy, nonatomic) NSArray *titleWords; // ivar: _titleWords
@property (copy, nonatomic) NSURL *url; // ivar: _url
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (readonly, copy, nonatomic) NSString *uuidString;


+(id)_dictionaryWithURL:(id)arg0 uuid:(id)arg1 title:(id)arg2 isShowingReader:(BOOL)arg3 readerScrollPosition:(id)arg4 isPinned:(BOOL)arg5 sceneID:(id)arg6 ;
-(BOOL)hasSameUUIDAndURLAsTab:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithDictionaryFromUserActivityUserInfo:(id)arg0 ;
-(id)initWithURL:(id)arg0 uuid:(id)arg1 title:(id)arg2 isShowingReader:(BOOL)arg3 readerScrollPosition:(id)arg4 isPinned:(BOOL)arg5 ;
-(id)initWithURL:(id)arg0 uuid:(id)arg1 title:(id)arg2 isShowingReader:(BOOL)arg3 readerScrollPosition:(id)arg4 sceneID:(id)arg5 ;


@end


#endif