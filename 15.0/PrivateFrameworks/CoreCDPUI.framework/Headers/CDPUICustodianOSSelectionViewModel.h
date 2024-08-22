// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDPUICUSTODIANOSSELECTIONVIEWMODEL_H
#define CDPUICUSTODIANOSSELECTIONVIEWMODEL_H

@class NSArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CDPUICustodianOSSelectionViewModel : NSObject <NSCopying>



@property (retain, nonatomic) NSArray *escapeOffers; // ivar: _escapeOffers
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (copy, nonatomic) NSArray *options; // ivar: _options
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif