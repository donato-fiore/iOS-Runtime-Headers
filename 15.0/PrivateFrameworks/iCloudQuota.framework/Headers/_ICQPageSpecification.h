// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ICQPAGESPECIFICATION_H
#define _ICQPAGESPECIFICATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _ICQPageSpecification : NSObject

@property (nonatomic) BOOL hasCancelButtonForBack; // ivar: _hasCancelButtonForBack
@property (retain, nonatomic) NSString *pageClassIdentifier; // ivar: _pageClassIdentifier
@property (retain, nonatomic) NSString *pageIdentifier; // ivar: _pageIdentifier
@property (retain, nonatomic) NSString *pageTitle; // ivar: _pageTitle


-(id)copyWithBindings:(id)arg0 ;
-(id)debugDescription;


@end


#endif