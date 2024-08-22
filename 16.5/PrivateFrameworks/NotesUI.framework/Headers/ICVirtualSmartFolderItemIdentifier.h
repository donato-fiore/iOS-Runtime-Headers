// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICVIRTUALSMARTFOLDERITEMIDENTIFIER_H
#define ICVIRTUALSMARTFOLDERITEMIDENTIFIER_H

@class NSManagedObjectID, NSString, ICFolderCustomNoteSortType, ICQuery;
@protocol ICItemIdentifier;

#import <Foundation/Foundation.h>


@interface ICVirtualSmartFolderItemIdentifier : NSObject <ICItemIdentifier>



@property (readonly, nonatomic) NSManagedObjectID *accountObjectID; // ivar: _accountObjectID
@property (copy, nonatomic) NSString *customTitle; // ivar: _customTitle
@property (nonatomic) int dateHeadersType;
@property (readonly, copy, nonatomic) NSString *dateHeadersTypeUserDefaultsKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *defaultTitle;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) ICFolderCustomNoteSortType *noteSortType;
@property (readonly, copy, nonatomic) NSString *noteSortTypeUserDefaultsKey;
@property (readonly, nonatomic) NSObject<ICItemIdentifier> *parentIdentifier; // ivar: _parentIdentifier
@property (readonly, nonatomic) ICQuery *query;
@property (readonly, nonatomic, getter=isShowingDateHeaders) BOOL showingDateHeaders;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsDateHeaders;
@property (readonly, copy, nonatomic) NSString *systemImageName;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *type; // ivar: _type
@property (nonatomic) NSInteger visibility;
@property (readonly, copy, nonatomic) NSString *visibilityUserDefaultsKey;


+(id)allTypes;
-(BOOL)isEmptyInContext:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isHiddenInContext:(id)arg0 ;
-(NSUInteger)visibleInvitationCountInContext:(id)arg0 ;
-(NSUInteger)visibleItemCountInContext:(id)arg0 ;
-(NSUInteger)visibleNoteCountInContext:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIdentifier:(id)arg0 parentIdentifier:(id)arg1 context:(id)arg2 ;
-(id)initWithType:(id)arg0 parentIdentifier:(id)arg1 ;
-(id)initWithType:(id)arg0 parentIdentifier:(id)arg1 accountObjectID:(id)arg2 ;
-(id)predicateForContext:(id)arg0 ;


@end


#endif