// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSEARCHRESULTPERSON_H
#define PXSEARCHRESULTPERSON_H

@class NSString;
@protocol PXNewSearchResult;

#import <Foundation/Foundation.h>


@interface PXSearchResultPerson : NSObject <PXNewSearchResult>



@property (nonatomic) NSUInteger assetCount; // ivar: _assetCount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *personUUID; // ivar: _personUUID
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSUInteger type; // ivar: _type


+(id)uniqueIdentiferFromPersonUUID:(id)arg0 displayName:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithTitle:(id)arg0 assetCount:(NSUInteger)arg1 personUUID:(id)arg2 identifier:(id)arg3 ;


@end


#endif