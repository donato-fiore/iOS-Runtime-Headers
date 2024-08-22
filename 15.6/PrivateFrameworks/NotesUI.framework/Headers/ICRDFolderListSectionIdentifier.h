// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICRDFOLDERLISTSECTIONIDENTIFIER_H
#define ICRDFOLDERLISTSECTIONIDENTIFIER_H

@class NSManagedObjectID, NSString;
@protocol ICRDSectionIdentifier, NSCopying;

#import <Foundation/Foundation.h>


@interface ICRDFolderListSectionIdentifier : NSObject <ICRDSectionIdentifier, NSCopying>



@property (retain, nonatomic) NSManagedObjectID *accountObjectID; // ivar: _accountObjectID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *expansionStateContext;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger sectionType; // ivar: _sectionType
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title; // ivar: _title


+(id)sortDescriptors;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToICRDFolderListSectionIdentifier:(id)arg0 ;
-(NSInteger)accountSectionTypeForLegacyAccount:(id)arg0 ;
-(NSInteger)accountSectionTypeForModernAccount:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithObject:(id)arg0 ;
-(id)initWithObject:(id)arg0 prefersSystemPaperSection:(BOOL)arg1 ;
-(id)initWithSectionType:(NSInteger)arg0 ;


@end


#endif