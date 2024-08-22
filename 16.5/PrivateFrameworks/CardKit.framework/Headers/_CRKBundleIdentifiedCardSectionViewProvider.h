// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CRKBUNDLEIDENTIFIEDCARDSECTIONVIEWPROVIDER_H
#define _CRKBUNDLEIDENTIFIEDCARDSECTIONVIEWPROVIDER_H

@class NSString, NSArray;
@protocol CRKIdentifiedCardSectionViewProviding, CRCard, CRKCardSectionViewProviding;

#import <Foundation/Foundation.h>


@interface _CRKBundleIdentifiedCardSectionViewProvider : NSObject <CRKIdentifiedCardSectionViewProviding>



@property (readonly, nonatomic) NSObject<CRCard> *card; // ivar: card
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *providerIdentifier; // ivar: providerIdentifier
@property (retain, nonatomic) NSObject<CRKCardSectionViewProviding> *realCardSectionViewProvider; // ivar: _realCardSectionViewProvider
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *viewConfigurations; // ivar: viewConfigurations


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(BOOL)vetoDisplayOfCardSection:(id)arg0 ;
-(NSUInteger)displayPriorityForCardSection:(id)arg0 ;


@end


#endif