// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICFOLDERLISTSECTIONIDENTIFIER_H
#define ICFOLDERLISTSECTIONIDENTIFIER_H

@class NSManagedObjectID, NSString;
@protocol ICSectionIdentifier, ICItemIdentifier;

#import <Foundation/Foundation.h>


@interface ICFolderListSectionIdentifier : NSObject <ICSectionIdentifier>



@property (retain, nonatomic) NSManagedObjectID *accountObjectID; // ivar: _accountObjectID
@property (readonly, nonatomic, getter=isCollapsible) BOOL collapsible;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *expansionStateContext;
@property (readonly, nonatomic) BOOL hasHeader;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<ICItemIdentifier> *parentIdentifier;
@property (nonatomic) NSInteger sectionType; // ivar: _sectionType
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)sortDescriptors;
+(id)systemSectionIdentifier;
+(id)tagSectionIdentifier;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToICFolderListSectionIdentifier:(id)arg0 ;
-(NSInteger)accountSectionTypeForLegacyAccount:(id)arg0 ;
-(NSInteger)accountSectionTypeForModernAccount:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithObject:(id)arg0 ;
-(id)initWithSectionType:(NSInteger)arg0 ;


@end


#endif