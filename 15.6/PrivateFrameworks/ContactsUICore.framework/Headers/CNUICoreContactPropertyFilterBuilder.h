// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNUICORECONTACTPROPERTYFILTERBUILDER_H
#define CNUICORECONTACTPROPERTYFILTERBUILDER_H


#import <Foundation/Foundation.h>


@interface CNUICoreContactPropertyFilterBuilder : NSObject

@property (nonatomic) BOOL excludeNickname; // ivar: _excludeNickname
@property (nonatomic) BOOL excludeNote; // ivar: _excludeNote
@property (nonatomic) BOOL excludePhoto; // ivar: _excludePhoto
@property (nonatomic) BOOL excludeRelationships; // ivar: _excludeRelationships


+(id)managedContactsFilterBuilder;
+(id)whitelistedContactsFilterBuilder;
-(id)build;


@end


#endif