// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PKDASHBOARDITEMWRAPPER_H
#define _PKDASHBOARDITEMWRAPPER_H

@class NSString;
@protocol PKIdentifiable, NSCopying, PKDashboardItem;

#import <Foundation/Foundation.h>


@interface _PKDashboardItemWrapper : NSObject <PKIdentifiable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier; // ivar: _identifier
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<PKDashboardItem> *wrappedItem; // ivar: _wrappedItem


-(id)initWithDashboardItem:(id)arg0 ;


@end


#endif