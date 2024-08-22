// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKASSETELEMENT_H
#define IKASSETELEMENT_H

@class NSString, NSURL, NSNumber;


#import "IKViewElement.h"

@interface IKAssetElement : IKViewElement

@property (readonly, retain, nonatomic) NSString *actionParams;
@property (readonly, retain, nonatomic) NSString *adamID;
@property (readonly, retain, nonatomic) NSString *bookmarkID;
@property (readonly, retain, nonatomic) NSString *contentID;
@property (readonly, retain, nonatomic) NSString *externalID;
@property (readonly, retain, nonatomic) NSURL *extrasURL;
@property (readonly, nonatomic, getter=isInfiniteDuration) BOOL infiniteDuration; // ivar: _infiniteDuration
@property (readonly, nonatomic) NSInteger keyDelivery;
@property (readonly, retain, nonatomic) NSNumber *persistentID;
@property (readonly, retain, nonatomic) NSNumber *rentalAdamID;
@property (readonly, retain, nonatomic) NSString *serviceID;
@property (readonly, nonatomic) NSInteger type;
@property (readonly, retain, nonatomic) NSURL *url;


+(BOOL)shouldParseChildDOMElements;
-(BOOL)infiniteDuration;
-(id)_numberForAttribute:(id)arg0 ;


@end


#endif