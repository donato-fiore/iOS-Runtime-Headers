// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPREMOTEVALIDATIONESCAPEOFFER_H
#define CDPREMOTEVALIDATIONESCAPEOFFER_H

@class NSMutableArray, NSString, UIViewController;

#import <Foundation/Foundation.h>


@interface CDPRemoteValidationEscapeOffer : NSObject {
    NSMutableArray *_escapeOptions;
}


@property (retain, nonatomic) NSString *escapeOfferName; // ivar: _escapeOfferName
@property (retain, nonatomic) NSString *message; // ivar: _message
@property (weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (retain, nonatomic) NSString *title; // ivar: _title


-(NSInteger)_styleForEscapeOption:(id)arg0 ;
-(id)_actionFromEscapeOption:(id)arg0 ;
-(id)escapeOptions;
-(id)init;
-(void)addEscapeOptionsObject:(id)arg0 ;
-(void)dismissOfferAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)handleEscapeAction:(id)arg0 ;


@end


#endif