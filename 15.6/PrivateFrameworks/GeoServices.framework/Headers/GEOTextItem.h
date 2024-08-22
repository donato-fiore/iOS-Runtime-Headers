// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOTEXTITEM_H
#define GEOTEXTITEM_H

@class NSString;
@protocol GEOTextItem;

#import <Foundation/Foundation.h>


@interface GEOTextItem : NSObject <GEOTextItem>



@property (readonly, nonatomic) NSString *primaryText; // ivar: _primaryText


-(id)init;
-(id)initWithPrimaryText:(id)arg0 ;
-(id)initWithTextItem:(id)arg0 ;


@end


#endif