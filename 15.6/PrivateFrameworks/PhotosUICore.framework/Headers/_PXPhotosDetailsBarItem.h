// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PXPHOTOSDETAILSBARITEM_H
#define _PXPHOTOSDETAILSBARITEM_H

@class NSString;
@protocol PXBarItem;

#import <Foundation/Foundation.h>


@interface _PXPhotosDetailsBarItem : NSObject <PXBarItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;


-(id)initWithIdentifier:(id)arg0 ;


@end


#endif