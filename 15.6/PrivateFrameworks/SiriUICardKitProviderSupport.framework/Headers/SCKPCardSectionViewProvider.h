// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCKPCARDSECTIONVIEWPROVIDER_H
#define SCKPCARDSECTIONVIEWPROVIDER_H

@class NSString, NSArray;
@protocol CRKIdentifiedCardSectionViewProviding, CRCard;

#import <Foundation/Foundation.h>


@interface SCKPCardSectionViewProvider : NSObject <CRKIdentifiedCardSectionViewProviding>



@property (readonly, nonatomic) NSObject<CRCard> *card; // ivar: _card
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *viewConfigurations; // ivar: _viewConfigurations


-(BOOL)isShortcutCard:(id)arg0 ;
-(NSUInteger)displayPriorityForCardSection:(id)arg0 ;
-(id)initWithCard:(id)arg0 ;


@end


#endif