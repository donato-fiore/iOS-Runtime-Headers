// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIDIFFABLEDATASOURCEUPDATE_H
#define _UIDIFFABLEDATASOURCEUPDATE_H

@class NSString, NSOrderedSet;
@protocol _UIDiffableDataSourceUpdate;

#import <Foundation/Foundation.h>


@interface _UIDiffableDataSourceUpdate : NSObject <_UIDiffableDataSourceUpdate>



@property (readonly, nonatomic) NSInteger action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id *destinationIdentifier; // ivar: _destinationIdentifier
@property (readonly, nonatomic) BOOL destinationIdentifierIsSectionIdentifier; // ivar: _destinationIdentifierIsSectionIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSOrderedSet *identifiers; // ivar: _identifiers
@property (readonly, nonatomic) BOOL isDeleteAll; // ivar: _isDeleteAll
@property (readonly, nonatomic) BOOL isSectionOperation; // ivar: _isSectionOperation
@property (readonly, nonatomic) NSInteger relativePosition; // ivar: _relativePosition
@property (readonly, nonatomic) BOOL shouldReconfigure; // ivar: _shouldReconfigure
@property (readonly) Class superclass;


+(id)updateDeleteAll;
-(id)initWithIdentifiers:(id)arg0 sectionIdentifiers:(id)arg1 action:(NSInteger)arg2 desinationIdentifier:(id)arg3 relativePosition:(NSInteger)arg4 destinationIsSection:(BOOL)arg5 ;
-(id)initWithItemIdentifiers:(id)arg0 action:(NSInteger)arg1 ;
-(id)initWithItemIdentifiers:(id)arg0 action:(NSInteger)arg1 destinationIdentifier:(id)arg2 relativePosition:(NSInteger)arg3 ;
-(id)initWithItemIdentifiers:(id)arg0 appendingToDestinationSectionIdentifier:(id)arg1 ;
-(id)initWithReconfiguredItemIdentifiers:(id)arg0 ;
-(id)initWithSectionIdentifiers:(id)arg0 action:(NSInteger)arg1 ;
-(id)initWithSectionIdentifiers:(id)arg0 action:(NSInteger)arg1 destinationIdentifier:(id)arg2 relativePosition:(NSInteger)arg3 ;
-(id)initWithSectionIdentifiers:(id)arg0 appendingToDestinationSectionIdentifier:(id)arg1 ;
-(void)_throwIfInvalid;


@end


#endif