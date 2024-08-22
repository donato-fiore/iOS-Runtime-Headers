// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUILINK_H
#define SKUILINK_H

@class NSURL, NSString, NSNumber, NSDictionary;
@protocol SSMetricsEventFieldProvider;

#import <Foundation/Foundation.h>

#import "SKUICountdown.h"
#import "SKUIItem.h"

@interface SKUILink : NSObject <SSMetricsEventFieldProvider>

 {
    SKUICountdown *_countdown;
}


@property (readonly, nonatomic) NSURL *URL; // ivar: _url
@property (readonly, nonatomic, getter=isActionable) BOOL actionable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SKUIItem *item; // ivar: _item
@property (readonly, nonatomic) NSNumber *itemIdentifier; // ivar: _itemIdentifier
@property (readonly, nonatomic) NSDictionary *linkDictionary;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *targetString; // ivar: _target
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(id)initWithComponentContext:(id)arg0 ;
-(id)initWithLinkDictionary:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 title:(id)arg1 targetString:(id)arg2 ;
-(id)valueForMetricsField:(id)arg0 ;


@end


#endif