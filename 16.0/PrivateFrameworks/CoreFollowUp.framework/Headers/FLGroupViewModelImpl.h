// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLGROUPVIEWMODELIMPL_H
#define FLGROUPVIEWMODELIMPL_H

@class NSMutableArray, NSString;
@protocol FLGroupViewModel;

#import <Foundation/Foundation.h>


@interface FLGroupViewModelImpl : NSObject <FLGroupViewModel>

 {
    NSMutableArray *_mutableItems;
}


@property (copy, nonatomic) NSString *accountID; // ivar: _accountID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *groupTitle; // ivar: _groupTitle
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL needsAccountID; // ivar: _needsAccountID
@property (copy, nonatomic) NSString *rowTitle; // ivar: _rowTitle
@property (readonly) Class superclass;


-(BOOL)restrictionEnabled;
-(BOOL)shouldCoalesceItems;
-(id)_expirationOrInformativeText;
-(id)footerText;
-(id)initWithIdentifier:(id)arg0 ;
-(id)items;
-(id)subtitleText;
-(void)addItem:(id)arg0 ;


@end


#endif