// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKTRANSITINCIDENTVIEWMODEL_H
#define MKTRANSITINCIDENTVIEWMODEL_H

@class UIColor, NSString;

#import <Foundation/Foundation.h>


@interface MKTransitIncidentViewModel : NSObject

@property (readonly, nonatomic) UIColor *backgroundColor;
@property (nonatomic, getter=isBlocking) BOOL blocking; // ivar: _blocking
@property (nonatomic) NSString *message; // ivar: _message
@property (nonatomic) BOOL showImage; // ivar: _showImage
@property (readonly, nonatomic) UIColor *symbolColor;
@property (retain, nonatomic) NSString *symbolName; // ivar: _symbolName


-(BOOL)isEqual:(id)arg0 ;


@end


#endif